#include "AppFrame.h"

namespace LuaSTGPlus
{
    void AppFrame::updateGraph2DBlendMode(BlendMode blend)
    {
        using namespace Core::Graphics;
        auto* ctx = m_pAppModel->getRenderer();
        switch (blend)
        {
        default:
        case LuaSTGPlus::BlendMode::MulAlpha:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Mul);
            ctx->setBlendState(IRenderer::BlendState::Alpha);
            break;
        case LuaSTGPlus::BlendMode::MulAdd:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Mul);
            ctx->setBlendState(IRenderer::BlendState::Add);
            break;
        case LuaSTGPlus::BlendMode::MulRev:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Mul);
            ctx->setBlendState(IRenderer::BlendState::RevSub);
            break;
        case LuaSTGPlus::BlendMode::MulSub:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Mul);
            ctx->setBlendState(IRenderer::BlendState::Sub);
            break;
        case LuaSTGPlus::BlendMode::AddAlpha:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Add);
            ctx->setBlendState(IRenderer::BlendState::Alpha);
            break;
        case LuaSTGPlus::BlendMode::AddAdd:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Add);
            ctx->setBlendState(IRenderer::BlendState::Add);
            break;
        case LuaSTGPlus::BlendMode::AddRev:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Add);
            ctx->setBlendState(IRenderer::BlendState::RevSub);
            break;
        case LuaSTGPlus::BlendMode::AddSub:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Add);
            ctx->setBlendState(IRenderer::BlendState::Sub);
            break;
        case LuaSTGPlus::BlendMode::AlphaBal:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Mul);
            ctx->setBlendState(IRenderer::BlendState::Inv);
            break;
        case LuaSTGPlus::BlendMode::MulMin:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Mul);
            ctx->setBlendState(IRenderer::BlendState::Min);
            break;
        case LuaSTGPlus::BlendMode::MulMax:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Mul);
            ctx->setBlendState(IRenderer::BlendState::Max);
            break;
        case LuaSTGPlus::BlendMode::MulMutiply:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Mul);
            ctx->setBlendState(IRenderer::BlendState::Mul);
            break;
        case LuaSTGPlus::BlendMode::MulScreen:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Mul);
            ctx->setBlendState(IRenderer::BlendState::Screen);
            break;
        case LuaSTGPlus::BlendMode::AddMin:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Add);
            ctx->setBlendState(IRenderer::BlendState::Min);
            break;
        case LuaSTGPlus::BlendMode::AddMax:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Add);
            ctx->setBlendState(IRenderer::BlendState::Max);
            break;
        case LuaSTGPlus::BlendMode::AddMutiply:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Add);
            ctx->setBlendState(IRenderer::BlendState::Mul);
            break;
        case LuaSTGPlus::BlendMode::AddScreen:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Add);
            ctx->setBlendState(IRenderer::BlendState::Screen);
            break;
        case LuaSTGPlus::BlendMode::One:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Mul);
            ctx->setBlendState(IRenderer::BlendState::One);
            break;
        case LuaSTGPlus::BlendMode::HueAlpha:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Hue);
            ctx->setBlendState(IRenderer::BlendState::Alpha);
            break;
        case LuaSTGPlus::BlendMode::HueAdd:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Hue);
            ctx->setBlendState(IRenderer::BlendState::Add);
            break;
        case LuaSTGPlus::BlendMode::HueRev:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Hue);
            ctx->setBlendState(IRenderer::BlendState::RevSub);
            break;
        case LuaSTGPlus::BlendMode::HueSub:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Hue);
            ctx->setBlendState(IRenderer::BlendState::Sub);
            break;
        case LuaSTGPlus::BlendMode::HueMin:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Hue);
            ctx->setBlendState(IRenderer::BlendState::Min);
            break;
        case LuaSTGPlus::BlendMode::HueMax:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Hue);
            ctx->setBlendState(IRenderer::BlendState::Max);
            break;
        case LuaSTGPlus::BlendMode::HueMul:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Hue);
            ctx->setBlendState(IRenderer::BlendState::Mul);
            break;
        case LuaSTGPlus::BlendMode::HueScreen:
            ctx->setVertexColorBlendState(IRenderer::VertexColorBlendState::Hue);
            ctx->setBlendState(IRenderer::BlendState::Screen);
            break;
        }
    }
    
    bool AppFrame::Render(IParticlePool* p, float hscale, float vscale) noexcept
    {
        assert(p);

        // 设置混合
        updateGraph2DBlendMode(p->GetBlendMode());
        
        // 渲染
        p->Render(hscale, vscale);
        return true;
    }

    void AppFrame::SnapShot(const char* path) noexcept
    {
        if (!GetAppModel()->getSwapChain()->saveSnapshotToFile(path))
        {
            spdlog::error("[luastg] SnapShot: Failed to save screenshot to '{}'", path);
            return;
        }
    }
    void AppFrame::SaveTexture(const char* tex_name, const char* path) noexcept
    {
        Core::ScopeObject<IResourceTexture> resTex = LRES.FindTexture(tex_name);
        if (!resTex)
        {
            spdlog::error("[luastg] SaveTexture: Texture not found: '{}'", tex_name);
            return;
        }
        if (!resTex->GetTexture()->saveToFile(path))
        {
            spdlog::error("[luastg] SaveTexture: Failed to save texture '{}' to '{}'", tex_name, path);
            return;
        }
    }
};
