#pragma once
#include "GameResource/ResourceBase.hpp"
#include "GameResource/ResourceTexture.hpp"
#include "Particle/ParticleList.h"

namespace LuaSTGPlus::Particle
{
    class TexParticlePool3D
    {
    public:
        struct Particle
        {
            Core::Vector3F pos;
            Core::Vector3F vel;
            Core::Vector3F accel;
            Core::Vector3F rot;
            Core::Vector3F omiga;
            Core::Vector2F scale;
            Core::Color4B color;
            uint32_t timer;
            Core::RectI uv;
            float extra1;
            float extra2;
            float extra3;
            float extra4;
        };

    public:
        Particle* AddParticle(Particle p) { plist.insert(p); return plist.GetFront(); }
        void Apply(std::function<bool(Particle*)> fn) { plist.foreach(fn); }
        void Clear() { plist.clear(); }
        Index GetSize() { return plist.GetSize(); }

        void Update();
        void Render();

    public:
        TexParticlePool3D(Index size, Core::ScopeObject<IResourceTexture> tex, BlendMode blend)
            : plist(size), tex(tex), blend(blend) {}

    private:
        ParticleList<Particle> plist;
        Core::ScopeObject<LuaSTGPlus::IResourceTexture> tex;
        BlendMode blend;
    };
}

