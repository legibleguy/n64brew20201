#include "playerinput.h"

#include "math/mathf.h"

unsigned short playerInputMapActionFlags(unsigned short buttons) {
    unsigned short result = 0;

    if (buttons & A_BUTTON) {
        result |= PlayerInputActionsJump;
    }

    if (buttons & B_BUTTON) {
        result |= PlayerInputActionsAttack;
    }

    if (buttons & D_CBUTTONS) {
        result |= PlayerInputActionsCommandRecall;
    }

    if (buttons & R_CBUTTONS) {
        result |= PlayerInputActionsCommandAttack;
    }

    if (buttons & L_CBUTTONS) {
        result |= PlayerInputActionsCommandDefend;
    }

    if (buttons & U_CBUTTONS) {
        result |= PlayerInputActionsCommandOpenBaseMenu;
    }

    return result;
}

void playerInputNoInput(struct PlayerInput* output) {
    output->actionFlags = 0;
    output->targetWorldDirection.x = 0.0f;
    output->targetWorldDirection.y = 0.0f;
    output->targetWorldDirection.z = 0.0f;
}

void playerInputPopulateWithJoystickData(OSContPad* pad, struct Quaternion* cameraRotation, enum PlayerInputFlags flags, struct PlayerInput* output) {
    struct Vector3 worldRight;
    struct Vector3 worldForward;

    quatMultVector(cameraRotation, &gRight, &worldRight);
    worldRight.y = 0.0f;
    vector3Normalize(&worldRight, &worldRight);
    quatMultVector(cameraRotation, &gForward, &worldForward);
    worldForward.y = 0.0f;
    vector3Normalize(&worldForward, &worldForward);

    float xMove = 0.0f;
    float yMove = 0.0f;
    
    if (flags & PlayerInputFlagsSwapJoystickAndDPad) {
        if (pad->button & L_JPAD) {
            xMove -= 1.0f;
        }
        if (pad->button & R_JPAD) {
            xMove += 1.0f;
        }
        if (pad->button & U_JPAD) {
            yMove -= 1.0f;
        }
        if (pad->button & D_JPAD) {
            yMove += 1.0f;
        }
    } else {
        xMove = clampf(pad->stick_x * (1.0f / 80.0f), -1.0f, 1.0f);
        yMove = clampf(pad->stick_y * (-1.0f / 80.0f), -1.0f, 1.0f);
    }

    vector3Scale(&worldRight, &output->targetWorldDirection, xMove);
    vector3AddScaled(&output->targetWorldDirection, &worldForward, yMove, &output->targetWorldDirection);

    output->actionFlags = playerInputMapActionFlags(pad->button);
}

unsigned playerInputGetDown(struct PlayerInput* output, enum PlayerInputActions command) {
    return output->actionFlags & ~output->prevActions & command;
}