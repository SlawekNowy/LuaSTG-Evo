// Write by Kuanlan (Kuanlan@outlook.com)
// Minimum perfect hash function for Lua language binding.
// This source file is generated by code generator.
// Don't modify this file directly, please modify the generator configuration.

#pragma once

namespace LuaSTG {
    enum class GameObjectMember {
        __NOT_FOUND = -1,
        _A = 1,
        VACCEL = 2,
        VANGLE = 3,
        _B = 4,
        _BLEND = 5,
        _COLOR = 6,
        _G = 7,
        VPOS = 8,
        _R = 9,
        VVSCALE = 10,
        VSPEED = 11,
        VVEL = 12,
        A = 13,
        AG = 14,
        ANI = 15,
        AX = 16,
        AY = 17,
        B = 18,
        BOUND = 19,
        CLASS = 20,
        COLLI = 21,
        COLLIDER = 22,
        DX = 23,
        DY = 24,
        GROUP = 25,
        HIDE = 26,
        HSCALE = 27,
        IMG = 28,
        LAYER = 29,
        MAXV = 30,
        MAXVX = 31,
        MAXVY = 32,
        NAVI = 33,
        IGNORESUPERPAUSE = 34,
        OMEGA = 35,
        PAUSE = 36,
        RES_RC = 37,
        RECT = 38,
        RESOLVEMOVE = 39,
        ROT = 40,
        STATUS = 41,
        TIMER = 42,
        VSCALE = 43,
        VX = 44,
        VY = 45,
        WORLD = 46,
        X = 47,
        Y = 48,
    };
    GameObjectMember MapGameObjectMember(const char* key);
}

namespace LuaSTG {
    enum class BlendModeX {
        __NOT_FOUND = -1,
        AddAdd = 6,
        AddAlpha = 5,
        AddMax = 15,
        AddMin = 14,
        AddMutiply = 16,
        AddRev = 7,
        AddScreen = 17,
        AddSub = 8,
        AlphaBal = 9,
        HueAdd = 20,
        HueAlpha = 19,
        HueMax = 24,
        HueMin = 23,
        HueMul = 25,
        HueRev = 21,
        HueScreen = 26,
        HueSub = 22,
        MulAdd = 2,
        MulAlpha = 1,
        MulMax = 11,
        MulMin = 10,
        MulMutiply = 12,
        MulRev = 3,
        MulScreen = 13,
        MulSub = 4,
        One = 18,
    };
    BlendModeX MapBlendModeX(const char* key);
}

namespace LuaSTG {
    enum class ColorMember {
        __NOT_FOUND = -1,
        f_AHSV = 1,
        f_ARGB = 2,
        m_a = 3,
        m_argb = 4,
        m_b = 5,
        m_g = 6,
        m_h = 7,
        m_r = 8,
        m_s = 9,
        m_v = 10,
    };
    ColorMember MapColorMember(const char* key);
}

namespace LuaSTG {
    enum class RectMember {
        __NOT_FOUND = -1,
        f_GetPointInside = 1,
        f_IsPointInside = 2,
        f_Resize = 3,
        m_b = 4,
        m_center = 5,
        m_dimension = 6,
        m_height = 7,
        m_l = 8,
        m_lb = 9,
        m_lt = 10,
        m_r = 11,
        m_ratio = 12,
        m_rb = 13,
        m_rt = 14,
        m_t = 15,
        m_width = 16,
    };
    RectMember MapRectMember(const char* key);
}

namespace LuaSTG {
    enum class Vector2Member {
        __NOT_FOUND = -1,
        f_Angle = 1,
        f_Dot = 2,
        f_Length = 3,
        f_Normalize = 4,
        f_Normalized = 5,
        m_x = 6,
        m_y = 7,
    };
    Vector2Member MapVector2Member(const char* key);
}

namespace LuaSTG {
    enum class Vector3Member {
        __NOT_FOUND = -1,
        f_Dot = 1,
        f_Length = 2,
        f_Normalize = 3,
        f_Normalized = 4,
        m_x = 5,
        m_y = 6,
        m_z = 7,
    };
    Vector3Member MapVector3Member(const char* key);
}

namespace LuaSTG {
    enum class Vector4Member {
        __NOT_FOUND = -1,
        f_Dot = 1,
        f_Length = 2,
        f_Normalize = 3,
        f_Normalized = 4,
        m_w = 5,
        m_x = 6,
        m_y = 7,
        m_z = 8,
    };
    Vector4Member MapVector4Member(const char* key);
}

namespace LuaSTG {
    enum class Matrix2Member {
        __NOT_FOUND = -1,
        f_Determinant = 1,
        f_Inverse = 2,
        f_Transpose = 3,
    };
    Matrix2Member MapMatrix2Member(const char* key);
}

namespace LuaSTG {
    enum class Matrix3Member {
        __NOT_FOUND = -1,
        f_Determinant = 1,
        f_Inverse = 2,
        f_Transpose = 3,
    };
    Matrix3Member MapMatrix3Member(const char* key);
}

namespace LuaSTG {
    enum class Matrix4Member {
        __NOT_FOUND = -1,
        f_Determinant = 1,
        f_Inverse = 2,
        f_Transpose = 3,
    };
    Matrix4Member MapMatrix4Member(const char* key);
}

