
#define _USING_V110_SDK71_ 1

#include "ResourceSetting.h"

using namespace KeyString;
using namespace Common;

void ResourceSetting::SceneResourceSetting(Engine* pEngine, const int scene_num)
{
	m_textures.clear();
	m_ses.clear();
	m_bgm.clear();

	switch (scene_num)
	{
	case SCENE_TITLE:

		TitleSetting();

		break;

	case SCENE_GAME:

		GameSetting();

		break;

	case SCENE_CLEAR:

		ClearSetting();

		break;

	case SCENE_GAMEOVER:

		GameoverSetting();

		break;

	default:

		break;
	}

	AddTextures(pEngine);
	AddSE(pEngine);
	AddBGM(pEngine);
}

void ResourceSetting::SceneResourceRelease(Engine* pEngine)
{
	ReleaseTextures(pEngine);
	ReleaseSE(pEngine);
	ReleaseBGM(pEngine);
}

void ResourceSetting::AddTextures(Engine* pEngine)
{
	for (const std::string& texture : m_textures)
	{
		pEngine->AddTexture(texture);
	}
}

void ResourceSetting::AddSE(Engine * pEngine)
{
	for (const std::string& se : m_ses)
	{
		pEngine->AddSE(se);
	}
}

void ResourceSetting::AddBGM(Engine * pEngine)
{
	if (!m_bgm.empty()) pEngine->LoadBGM(m_bgm);
}

void ResourceSetting::ReleaseTextures(Engine * pEngine)
{
	for (const std::string& texture : m_textures)
	{
		pEngine->ReleaseTexture(texture);
	}
}

void ResourceSetting::ReleaseSE(Engine * pEngine)
{
	for (const std::string& se : m_ses)
	{
		pEngine->ReleaseSE(se);
	}
}

void ResourceSetting::ReleaseBGM(Engine * pEngine)
{
	if (!m_bgm.empty()) pEngine->ReleaseBGM();
}

void ResourceSetting::TitleSetting()
{
	m_textures =
	{
		
	};

	//m_bgm = ;

	m_ses =
	{

	};
}

void ResourceSetting::GameSetting()
{
	m_textures =
	{
		TEXTURE_PLAYER,
		TEXTURE_UI_WHITE,
		TEXTURE_UI_GREEN,
		TEXTURE_UI_BLUE,
		TEXTURE_UI_PURPLE,
	};

	//m_bgm = ;

	m_ses =
	{

	};
}

void ResourceSetting::ClearSetting()
{
	m_textures =
	{
		
	};

	//m_bgm = ;

	m_ses =
	{
		
	};
}

void ResourceSetting::GameoverSetting()
{
	m_textures =
	{
		
	};

	//m_bgm = ;

	m_ses =
	{

	};
}
