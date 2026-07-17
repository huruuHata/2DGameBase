//*****************************************************************************
//
// ゲーム全体で使用するリソース、構造体などの宣言
//
// GameBase.h
//
// K_Yamaoka
//
// 2013/03/04
//
//*****************************************************************************

#pragma once

//-----------------------------------------------------------------------------
//システム関係のヘッダファイルです。変更しないでください。
//-----------------------------------------------------------------------------

#include "System\\Engine\\Matrix\\Camera.h"
#include "System\\Engine\\Matrix\\Projection.h"
#include "System\\Engine\\Matrix\\Viewport.h"

#include "System\\Engine\\Light\\Ambient.h"
#include "System\\Engine\\Light\\Directional.h"

#include "System\\Engine\\Mesh\\Primitive.h"
#include "System\\Engine\\Billboard\\Billboard.h"
#include "System\\Engine\\Particle\\ParticleManage.h"

#include "System\\Engine\\Collision\\Collision.h"
#include "System\\Engine\\Collision\\BoundingBox.h"
#include "System\\Engine\\Collision\\BoundingSphere.h"

#include "System\\Engine\\Mesh\\Model.h"

#include "System\\Engine\\Engine.h"


//-----------------------------------------------------------------------------
//Ｃ言語でのdefine、構造体などはこちらで宣言します。
//-----------------------------------------------------------------------------

constexpr int ROW = 12;
constexpr int COL = 12;

struct Field
{
	int map[ROW][COL];
};

//-----------------------------------------------------------------------------
//ゲーム中で使用するテクスチャ、BGM、SE、フォントのパス付ファイル名を書きます。
//-----------------------------------------------------------------------------
namespace KeyString
{
	//****************
	// ファイル
	//****************

	//セーブデータ

	constexpr char* FILE_SAVE = "Resource\\Data\\Json\\\\SaveData.json";

	//オブジェクト

	constexpr char* FILE_PLAYER = "Resource\\Data\\Json\\Object\\PlayerData.json";
	constexpr char* FILE_STAGE = "Resource\\Data\\Json\\Object\\StageData.json";

	//ＵＩ

	constexpr char* FILE_TITLE_UI = "Resource\\Data\\Json\\UI\\TitleUI.json";
	constexpr char* FILE_GAME_UI = "Resource\\Data\\Json\\UI\\GameUI.json";
	constexpr char* FILE_CLEAR_UI = "Resource\\Data\\Json\\UI\\ClearUI.json";
	constexpr char* FILE_GAMEOVER_UI = "Resource\\Data\\Json\\UI\\GameoverUI.json";


	constexpr char* FONT_GOTHIC100 = "100:ＭＳ ゴシック";
}
