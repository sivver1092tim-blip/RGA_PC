#pragma once
#include "stdafx.h"
#include "wchar.h"
#include "Global.h"
#include "GEnum.h"
#include "VMProtectSDK.h"
#include <stdlib.h>


MultiName g_szServerName[MAX_SERVER] =
{
	{ L"칼데스",			L"卡尔德斯"	},
	{ L"드라카스",		L"德拉克斯"	},
	{ L"브리든",			L"布里登"	},
	{ L"안타리아",		L"安塔利亚"	},
	{ L"실모르",			L"希摩尔"	},
	{ L"카렌",			L"凯伦"		},
	{ L"세바",			L"塞巴"		},
	{ L"크레모",			L"克雷默"	},
	{ L"림스트",			L"林斯特"	},
	{ L"에스켈",			L"埃斯克尔"	},
	{ L"레인베이",		L"雷恩湾"	},
	{ L"다크빌",			L"达克镇"	},
	{ L"나아스",			L"尼亚斯"	},
	{ L"시르페나",		L"西尔佩娜"	},
	{ L"아이미스",		L"伊米斯"	},
};

MultiName g_pFieldName[MAX_FIELD] =
{
	{ L"01. 고대 미궁 B1",		L"01. 远古迷宫 B1",		},
	{ L"02. 윈드롱",				L"02. 云德隆",			},
	{ L"03. 데스 밸리",			L"03. 死亡谷",			},
	{ L"04. 숨겨진 해안",			L"04. 隐藏海岸",			},
	{ L"05. 어둠 숲",			L"05. 黑暗森林",			},
	{ L"06. 림스트",				L"06. 林斯特",			},
	{ L"07. 카타콤 B1",			L"07. 地下墓穴 B1",		},
	{ L"08. 불의 평원",			L"08. 火之平原",			},
	{ L"09. 세바 오아시스",		L"09. 塞巴绿洲",			},
	{ L"10. 악어 숲",			L"10. 鳄鱼森林",			},
	{ L"11. 린포트",				L"11. 林波特",			},
	{ L"12. 안개 계곡",			L"12. 迷雾之谷",			},
	{ L"13. 고대 미궁 B2",		L"13. 远古迷宫 B2",		},
	{ L"14. 카렌 화산",			L"14. 凯伦火山",			},
	{ L"15. 카타콤 B2",			L"15. 地下墓穴 B2",		},
	{ L"16. 드베르그",			L"16. 迪贝格",			},
	{ L"17. 크레모 호수",			L"17. 克雷默湖",			},
	{ L"18. 레인베이",			L"18. 雷恩湾",			},
	{ L"19. 아카마 소금 사막",		L"19. 阿卡玛盐漠",		},
	{ L"20. 고대 미궁 B3",		L"20. 远古迷宫 B3",		},
	{ L"21. 얼음 항구",			L"21. 寒冰港口",			},
	{ L"22. 카타콤 B3",			L"22. 地下墓穴 B3",		},
	{ L"23. 세바 폐허",			L"23. 塞巴废墟",			},
	{ L"24. 사막 동굴 B1",		L"24. 沙漠洞穴 B1",		},
	{ L"25. 드베르그 B1",			L"25. 迪贝格 B1",		},
	{ L"26. 끝없는 정글",			L"26. 无尽的雨林",		},
	{ L"27. 지하 신전 B1",		L"27. 地下神殿 B1",		},
	{ L"28. 지하 신전 B2",		L"28. 地下神殿 B2",		},
	{ L"29. 에스켈",				L"29. 埃斯克尔",			},
	{ L"30. 리베르 유적지",		L"30. 利贝尔遗迹",		},
	{ L"31. 지하 신전 B3",		L"31. 地下神殿 B3",		},
	{ L"32. 드베르그 B2",			L"32. 迪贝格 B2",		},
	{ L"33. 베른 산맥",			L"33. 贝伦山脉",			},
	{ L"34. 다크빌",				L"34. 达克镇",			},
	{ L"35. 사막 동굴 B2",		L"35. 沙漠洞穴 B2",		},
	{ L"36. 카렘 농장",			L"36. 卡雷姆农场",		},
	{ L"37. 파미르 고원",			L"37. 帕米尔高原",		},
	{ L"38. 안타칸 평원",			L"38. 安塔坎村",			},
	{ L"39. 켄타우스 협곡",		L"39. 肯塔斯峡谷",		},
	{ L"40. 노스링 빙하",			L"40. 诺斯林冰河",		},
	{ L"41. 시라산",				L"41. 希拉山",			},
	{ L"42. 칼데스 성",			L"42. 卡尔德斯城",		},
	{ L"43. 수중 회랑",			L"43. 水中回廊",			},
	{ L"44. [W] 거인의 정원",		L"44. [W] 巨人花园",		},
	{ L"45. [W] 헤이븐 성",		L"45. [W] 避风港城",		},
	{ L"46. [W] 은빛 호수",		L"46. [W] 银色湖泊",		},
	{ L"47. [W] 윈드레아",		L"47. [W] 温德雷亚",		},
	{ L"48. [W] 살렌드로",		L"48. [W] 萨伦德罗",		},
	{ L"49. [W] 아이스 포지",		L"49. [W] 冰之堡垒",		},
	{ L"51. [W] 아이스 포지 B1",	L"51. [W] 冰之堡垒 B1",	},
	{ L"52. 서리호수",			L"52. 寒霜湖",			},
	{ L"53. [W] 마녀의 은신처",	L"53. [W] 魔女的藏身处",	},
	{ L"54. 그림자 섬",			L"54. 影子岛",			},
	{ L"55. [W] 아이스 포지 B2",	L"55. [W] 冰之堡垒 B2",	},
};

MultiName g_pDungeonName[MAX_DUNGEON] =
{
	// 일반 던전

	/*00*/{	L"고대 미궁 B1",				L"远古迷宫 B1",			},
	/*01*/{ L"고대 미궁 B2",				L"远古迷宫 B2",			},
	/*02*/{ L"고대 미궁 B3",				L"远古迷宫 B3",			},

	/*03*/{ L"카타콤 B1",				L"地下墓穴 B1",			},
	/*04*/{ L"카타콤 B2",				L"地下墓穴 B2",			},
	/*05*/{ L"카타콤 B3",				L"地下墓穴 B3",			},

	/*06*/{ L"드베르그 입구",				L"迪贝格 入口",			},
	/*07*/{ L"드베르그 B1",				L"迪贝格 B1",			},
	/*08*/{ L"드베르그 B2",				L"迪贝格 B2",			},

	/*09*/{ L"사막 동굴 B1",				L"沙漠洞穴 B1",			},
	/*10*/{ L"사막 동굴 B2",				L"沙漠洞穴 B2",			},

	/*11*/{ L"지하 신전 B1",				L"地下神殿  B1",			},
	/*12*/{ L"지하 신전 B2",				L"地下神殿  B2",			},
	/*13*/{ L"지하 신전 B3",				L"地下神殿  B3",			},

	/*14*/{ L"왕의 무덤 입구",			L"王陵 入口",				},
	/*15*/{ L"왕의 무덤 B1",				L"王陵 B1",				},
	/*16*/{ L"왕의 무덤 B2",				L"王陵 B2",				},
	/*17*/{ L"왕의 무덤 B3",				L"王陵 B3",				},
	/*18*/{ L"왕의 무덤 B4",				L"王陵 B4",				},
	/*19*/{ L"왕의 무덤 B5",				L"王陵 B5",				},

	/*20*/{ L"[W] 아이스 포지 입구",		L"[W] 冰之堡垒 入口",		},
	/*21*/{ L"[W] 아이스 포지 B1",		L"[W] 冰之堡垒 B1",		},
	/*22*/{ L"[W] 아이스 포지 B2",		L"[W] 冰之堡垒 B2",		},

	/*23*/{ L"[W] 엘프의 안식처 입구",		L"[W] 精灵安息处 入口",	},
	/*24*/{ L"[W] 엘프의 안식처 B1",		L"[W] 精灵安息处 B1",		},

	/*25*/{ L"[W] 마녀의 안식처",			L"[W] 魔女的藏身处",		},

	// 특수 던전

	/*26*/{ L"정복자의 안식처 (Lv.40)",		L"征服者安息处 (Lv.40)",		},
	/*27*/{ L"정복자의 안식처 (Lv.55)",		L"征服者安息处 (Lv.55)",		},
	/*28*/{ L"정복자의 안식처 (Lv.65)",		L"征服者安息处 (Lv.65)",		},
	/*29*/{ L"정복자의 안식처 (Lv.70)",		L"征服者安息处 (Lv.70)",		},
	/*30*/{ L"정복자의 안식처 (Lv.75)",		L"征服者安息处 (Lv.75)",		},
	/*31*/{ L"정복자의 안식처 (Lv.80)",		L"征服者安息处 (Lv.80)",		},

	/*32*/{ L"엘프의 광산 (Lv.60)",			L"精灵的矿山 (Lv.60)",		},
	/*33*/{ L"엘프의 광산 (Lv.65)",			L"精灵的矿山 (Lv.65)",		},
	/*34*/{ L"엘프의 광산 (Lv.70)",			L"精灵的矿山 (Lv.70)",		},
	/*35*/{ L"엘프의 광산 (Lv.75)",			L"精灵的矿山 (Lv.75)",		},
	/*36*/{ L"엘프의 광산 (Lv.80)",			L"精灵的矿山 (Lv.80)",		},
	/*37*/{ L"엘프의 광산 (Lv.85)",			L"精灵的矿山 (Lv.85)",		},

	/*38*/{ L"환영의 유적 (Lv.30)",			L"幻影遗迹 (Lv.30)",			},
	/*39*/{ L"환영의 유적 (Lv.40)",			L"幻影遗迹 (Lv.40)",			},
	/*40*/{ L"환영의 유적 (Lv.50)",			L"幻影遗迹 (Lv.50)",			},
	/*41*/{ L"환영의 유적 (Lv.60)",			L"幻影遗迹 (Lv.60)",			},
	/*42*/{ L"환영의 유적 (Lv.70)",			L"幻影遗迹 (Lv.70)",			},
	/*43*/{ L"환영의 유적 (Lv.75)",			L"幻影遗迹 (Lv.75)",			},
	/*44*/{ L"환영의 유적 (Lv.80)",			L"幻影遗迹 (Lv.80)",			},
	/*45*/{ L"환영의 유적 (Lv.85)",			L"幻影遗迹 (Lv.85)",			},

	/*46*/{ L"시간의 미궁 (Lv.30)",			L"时间迷宫 (Lv.30)",			},
	/*47*/{ L"시간의 미궁 (Lv.40)",			L"时间迷宫 (Lv.40)",			},
	/*48*/{ L"시간의 미궁 (Lv.50)",			L"时间迷宫 (Lv.50)",			},
	/*49*/{ L"시간의 미궁 (Lv.60)",			L"时间迷宫 (Lv.60)",			},
	/*50*/{ L"시간의 미궁 (Lv.70)",			L"时间迷宫 (Lv.70)",			},
	/*51*/{ L"시간의 미궁 (Lv.75)",			L"时间迷宫 (Lv.75)",			},
	/*52*/{ L"시간의 미궁 (Lv.80)",			L"时间迷宫 (Lv.80)",			},
	/*53*/{ L"시간의 미궁 (Lv.85)",			L"时间迷宫 (Lv.85)",			},

	/*54*/{ L"얼음 신전 (Lv.30)",				L"寒冰神殿 (Lv.30)",			},
	/*55*/{ L"얼음 신전 (Lv.40)",				L"寒冰神殿 (Lv.40)",			},
	/*56*/{ L"얼음 신전 (Lv.50)",				L"寒冰神殿 (Lv.50)",			},
	/*57*/{ L"얼음 신전 (Lv.60)",				L"寒冰神殿 (Lv.60)",			},
	/*58*/{ L"얼음 신전 (Lv.70)",				L"寒冰神殿 (Lv.70)",			},
	/*59*/{ L"얼음 신전 (Lv.75)",				L"寒冰神殿 (Lv.75)",			},
	/*60*/{ L"얼음 신전 (Lv.80)",				L"寒冰神殿 (Lv.80)",			},
	/*61*/{ L"얼음 신전 (Lv.85)",				L"寒冰神殿 (Lv.85)",			},

	// 층마다 클리어 하는 던전

	/*62*/{ L"혼돈의 성채 1층",				L"混吨城堡 1层",				},
	/*63*/{ L"혼돈의 성채 2층",				L"混吨城堡 2层",				},
	/*64*/{ L"혼돈의 성채 3층",				L"混吨城堡 3层",				},

	/*65*/{ L"정령의 성채 1층",				L"精灵城堡 1层",				},
	/*66*/{ L"정령의 성채 2층",				L"精灵城堡 2层",				},
	/*67*/{ L"정령의 성채 3층",				L"精灵城堡 3层",				},

};


MultiName g_pRaidBossName[MAX_RAIDBOSS] =
{
	{ L"파메즈",						L"帕梅兹"					},
	{ L"마기오스",					L"玛吉欧斯"					},
	{ L"아크딘",						L"艾克丁"					},
	{ L"아라마네드",					L"阿拉玛内德"					},
	{ L"키르세아",					L"基尔塞亚"					},
	{ L"아퀴스티아",					L"阿奎斯蒂亚的"				},
};

WCHAR		g_szItemMode[MAX_MODE][MAX_NAME] = { 0, };//{L"처리없음", L"상점판매", L"장비분해", L"창고보관", L"물품삭제", L"자동사용", L"거래등록", L"창고찾기"};
WCHAR		g_szItemGrade[MAX_GRADE][MAX_NAME] = {L"일반", L"고급", L"희귀", L"영웅", L"전설", L"신화"};
WCHAR		g_szItemType[MAX_TYPE_1][MAX_NAME] = {L"무기", L"방어구", L"장신구", L"재료", L"소모품", L"전리품", L"스킬북"};

WCHAR		g_szAppPath[MAX_PATH] = {0,};

MultiName g_pCharActor[MAX_CLASS] =
{
	{ L"나이트",		L"骑士"		},
	{ L"레인저",		L"游侠"		},
	{ L"매지션",		L"法师"		},
};

MultiName g_pStat[MAX_STAT] =
{
	{ L"힘",			L"力量"		},
	{ L"민첩",		L"敏捷"		},
	{ L"지능",		L"智力"		},
	{ L"체력",		L"体力"		},
	{ L"지혜",		L"精神"		},
};


PotionRes g_pPotionRes[MAX_POTION] =
{
	{ L"체력 회복제",						L"体力恢复药水",			ItemID_Potion1,			ePlayerClass_PC_COMMON		},

	{ L"각성의 물약",						L"觉醒药水",				ItemID_BufPotion,		ePlayerClass_PC_COMMON		},
	{ L"강인한 소고기 스테이크",			L"坚韧牛排",				ItemID_BufFood1,		ePlayerClass_PC_KNIGHT		},
	{ L"민첩한 양고기 스튜",				L"敏捷的炖羊肉",			ItemID_BufFood2,		ePlayerClass_PC_RANGER		},
	{ L"지혜로운 두부 볶음",				L"智慧的炒豆腐",			ItemID_BufFood3,		ePlayerClass_PC_MAGICIAN	},
										
	{ L"텔레포트 주문서",					L"随机传送卷轴",			ItemID_TelScroll,		ePlayerClass_PC_COMMON		},
	{ L"거점 귀환 주문서",					L"据点回归卷轴",			ItemID_RetScroll,		ePlayerClass_PC_COMMON		},
};


SkillRes g_pSkillRes[MAX_SKILLRES] =
{
	{ L"라이트닝 볼트",			L"雷霆万钧",			4010100,		1,	-1 },
	{ L"실드",					L"护盾",				4010200,		1,	-1 },
	{ L"MP 마스터리",				L"MP精通",			4010300,		0,	-1 },
	{ L"HP 마스터리",				L"HP精通",			4010400,		0,	-1 },
	{ L"인크리즈 포션",			L"增强药水",			4010500,		0,	-1 },
	{ L"힐",						L"治疗",				4010600,		1,	-1 },
	{ L"리커버리",				L"恢复",				4020100,		0,	-1 },
	{ L"스톤 스킨",				L"岩石皮肤",			4020200,		0,	-1 },
	{ L"클렌징",					L"净化",				4020300,		0,	-1 },
	{ L"어보이드",				L"闪避",				4030100,		1,	-1 },
	{ L"슬로우",					L"慢镜头",			4030200,		0,	-1 },
	{ L"미스틱 실드",				L"神秘护盾",			4030300,		0,	-1 },
	{ L"크리티컬 레지스턴스",		L"临界阻力",			4040100,		0,	-1 },
	{ L"사일런스",				L"沉默",				4040200,		0,	-1 },
	{ L"이클립스 마이트",			L"黯然失色的力量",		4050100,		0,	-1 },
	{ L"베르제브",				L"别西卜",			4060100,		1,	-1 },

	{ L"스트라이크",				L"打击",				4110100,		1,	0 },
	{ L"닷지 애로우",				L"躲避之箭",			4110200,		1,	0 },
	{ L"스턴",					L"眩晕",				4120100,		1,	0 },
	{ L"디펜스 마스터리",			L"防御精通",			4120200,		0,	0 },
	{ L"배쉬",					L"重击",				4130100,		1,	0 },
	{ L"히트 마스터리",			L"打击精通",			4130200,		1,	0 },
	{ L"드래곤 베일",				L"龙之保护罩",		4130300,		0,	0 },
	{ L"레지스트 스턴",			L"眩晕抵抗",			4130400,		0,	0 },
	{ L"스톤 아머",				L"岩石装甲",			4130500,		0,	0 },
	{ L"포인트 피어스",			L"精准射击",			4140100,		1,	0 },
	{ L"드래곤 피어",				L"龙之威严",			4140200,		0,	0 },
	{ L"리턴 투 페인",			L"回归痛苦",			4140300,		1,	0 },
	{ L"커즈드 스트라이크",		L"诅咒打击",			4140400,		0,	0 },
	{ L"어택 마스터리",			L"攻击精通",			4140500,		0,	0 },
	{ L"스피어 스윕",				L"战矛横扫",			4150100,		0,	0 },
	{ L"퍼펙트 큐어",				L"完美治疗",			4150200,		0,	0 },
	{ L"샤우트 스턴",				L"战吼眩晕",			4160100,		1,	0 },

	{ L"더블 샷",				L"二连射",			4210100,		1,	1 },
	{ L"호크 아이",				L"鹰眼",				4210200,		0,	1 },
	{ L"이베이젼 마스터",			L"逃脱专家",			4220100,		0,	1 },
	{ L"윈드 소울",				L"风之灵",			4220200,		0,	1 },
	{ L"애로우 레인",				L"箭雨",				4230100,		1,	1 },
	{ L"아이언하이드",			L"铁皮",				4230200,		1,	1 },
	{ L"애큐레이트 에임",			L"精确瞄准",			4230300,		1,	1 },
	{ L"실피드",					L"希尔菲德",			4230400,		1,	1 },
	{ L"대거 스트로크",			L"致命匕首",			4240100,		1,	1 },
	{ L"윈드 프로텍션",			L"风之守护",			4240200,		1,	1 },
	{ L"샤프슈터",				L"神枪手",			4240300,		0,	1 },
	{ L"윈드 블레싱",				L"风之祝福",			4240400,		0,	1 },
	{ L"카오틱 샷",				L"混乱射击",			4250100,		0,	1 },
	{ L"레지스트 실드",			L"护盾抵抗",			4250200,		1,	1 },
	{ L"피닉스 애로우",			L"不死鸟之箭",		4260100,		1,	1 },

	{ L"마인드 컨트롤",			L"精神控制",			4410100,		0,	2 },
	{ L"어스 퀘이크",				L"地震",				4410200,		1,	2 },
	{ L"컨퓨전",					L"混乱",				4420100,		0,	2 },
	{ L"매직 플레이트",			L"魔法护甲",			4420200,		1,	2 },
	{ L"엠플리파이 라이프",		L"生命增强",			4420300,		1,	2 },
	{ L"썬더 스톰",				L"雷暴",				4430100,		0,	2 },
	{ L"블레싱",					L"祝福",				4430200,		1,	2 },
	{ L"바디 스펠",				L"灵敏身姿",			4430300,		1,	2 },
	{ L"레지스트 업",				L"增加抵抗",			4430400,		1,	2 },
	{ L"퀵스텝",					L"快步",				4430500,		0,	2 },
	{ L"와이드 힐",				L"广域治疗",			4440100,		0,	2 },
	{ L"슬립",					L"睡眠",				4440200,		0,	2 },
	{ L"이레이즈",				L"抹除",				4440300,		0,	2 },
	{ L"프로즌 스피어",			L"冰封之矛",			4440400,		1,	2 },
	{ L"스트렝스 파이어",			L"烈焰燃烧",			4440500,		1,	2 },
	{ L"매스 사일런스",			L"群体沉默",			4440600,		0,	2 },
	{ L"인챈트 매직",				L"附魔",				4440700,		1,	2 },
	{ L"인페르노 배리어",			L"地狱火屏障",		4450100,		1,	2 },
	{ L"인페르노",				L"地狱火",			4450200,		1,	2 },
	{ L"그레이트 힐",				L"强效治疗",			4450300,		1,	2 },
	{ L"아케인 포커스",			L"奥术专注",			4450400,		1,	2 },
	{ L"헬 파이어",				L"地狱之火",			4460100,		1,	2 },
};


MakeResUI g_pMakeEventRes[MAX_MAKEEVENTRES] =
{
	{ L"무기 강화 주문서 (귀속)",				L"武器强化卷轴 (绑定)",				91602101 },
	{ L"방어구 강화 주문서 (귀속)",			L"防具强化卷轴 (绑定)",				91603101 },
	{ L"장신구 강화 주문서 (귀속)",			L"饰品强化卷轴 (绑定)",				91604101 },
	{ L"에린도르 정수 (귀속)",					L"埃林多尔精髓 (绑定)",				90622101 },

	{ L"근위대 희귀 장비 도면 (귀속)",			L"近卫队稀有装备设计图 (绑定)",			90703101 },
};

SkillBookRes g_pSkillBookRes[MAX_SKILLBOOKRES] =
{
	{ L"라이트닝 볼트",		105181011,		1,		8000,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_COMMON },
	{ L"실드",				105181021,		1,		8500,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_COMMON },
	{ L"힐",					105181061,		1,		7500,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_COMMON },
	{ L"MP 마스터리",			105181031,		1,		7000,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_COMMON },
	{ L"HP 마스터리",			105181041,		1,		7000,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_COMMON },
	{ L"인크리즈 포션",		105181051,		1,		7000,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_COMMON },
	{ L"리커버리",			105182011,		10,		73000,		eItemGrade_IG_MAGICAL,		ePlayerClass_PC_COMMON },
	{ L"스톤 스킨",			105182021,		10,		75000,		eItemGrade_IG_MAGICAL,		ePlayerClass_PC_COMMON },
	{ L"어보이드",			105183011,		15,		600000,		eItemGrade_IG_RARE,			ePlayerClass_PC_COMMON },

	{ L"스트라이크",			105181071,		1,		8000,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_KNIGHT },
	{ L"닷지 애로우",			105181081,		1,		10000,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_KNIGHT },
	{ L"디펜스 마스터리",		105182051,		10,		75000,		eItemGrade_IG_MAGICAL,		ePlayerClass_PC_KNIGHT },
	{ L"히트 마스터리",		105183051,		15,		600000,		eItemGrade_IG_RARE,			ePlayerClass_PC_KNIGHT },
	{ L"리턴 투 페인",		105184051,		20,		25000000,	eItemGrade_IG_EPIC,			ePlayerClass_PC_KNIGHT },

	{ L"더블 샷",			105181091,		1,		8000,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_RANGER },
	{ L"호크 아이",			105181101,		1,		10000,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_RANGER },
	{ L"윈드 소울",			105182071,		10,		75000,		eItemGrade_IG_MAGICAL,		ePlayerClass_PC_RANGER },
	{ L"애큐레이트 에임",		105183111,		15,		600000,		eItemGrade_IG_RARE,			ePlayerClass_PC_RANGER },
	{ L"윈드 블레싱",			105184111,		20,		25000000,	eItemGrade_IG_EPIC,			ePlayerClass_PC_RANGER },

	{ L"어스 퀘이크",			105181121,		1,		8000,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_MAGICIAN },
	{ L"마인드 컨트롤",		105181111,		1,		10000,		eItemGrade_IG_NORMAL,		ePlayerClass_PC_MAGICIAN },
	{ L"매직 플레이트",		105182091,		10,		75000,		eItemGrade_IG_MAGICAL,		ePlayerClass_PC_MAGICIAN },
	{ L"블레싱",				105183141,		15,		600000,		eItemGrade_IG_RARE,			ePlayerClass_PC_MAGICIAN },
	{ L"슬립",				105184131,		20,		25000000,	eItemGrade_IG_EPIC,			ePlayerClass_PC_MAGICIAN },
};

SKILL_INTERVAL g_pDefaultSkill[MAX_CLASS][10] =
{
	{
		{ 1, 4010200, 10 },
		{ 1, 4030100, 10 },
		{ 1, 4060100, 10 },

		{ 1, 4110100, 10 },
		{ 1, 4110200, 10 },
	},

	{
		{ 1, 4010200, 10 },
		{ 1, 4030100, 10 },
		{ 1, 4060100, 10 },

		{ 1, 4210100, 10 },
	},

	{
		{ 1, 4010200, 10 },
		{ 1, 4030100, 10 },
		{ 1, 4060100, 10 },

		{ 1, 4410200, 10 },
		{ 1, 4420200, 10 },
		{ 1, 4420300, 10 },
	},
};

WCHAR g_aryRegisterList[e_Reg_Count][MAX_NAME_LEN] = {
	L"RAX",
	L"RBX",
	L"RCX",
	L"RDX",
	L"RSI",
	L"RDI",
	L"RIP",
	L"RSP",
	L"RBP",
	L"RFL",
	L"R8",
	L"R9",
	L"R10",
	L"R11",
	L"R12",
	L"R13",
	L"R14",
	L"R15",
	L"Arg5",
	L"Arg6",
};

WCHAR g_aryDataValueTypeList[e_DVT_Count][MAX_NAME_LEN] = {
	L"BIT",
	L"BYTE",
	L"WORD",
	L"DWORD",
	L"DWORD64",
};

WCHAR g_arySignList[e_Sign_Count][MAX_NAME_LEN] = {
	L"+",
	L"-",
};

BOOL IsFileExist(WCHAR *szPath)
{
	struct _stat32 buffer;
	return (_wstat32(szPath, &buffer) == 0);
}


__inline unsigned short GetHashValue(LPCSTR szStr)
{
	unsigned short nHash = 0;

	LPCSTR p = szStr;
	while (*p)
	{
		nHash = ((nHash << 11) | (nHash >> 5));
		nHash = nHash + *p;
		p++;
	}

	return nHash;
}


PVOID MyGetProcAddress(DWORD64 qwBase, unsigned short wFunc)
{
	//VMProtectBeginUltra("MyGetProcAddress");

	PVOID ImageBase = (PVOID)(qwBase);
	DWORD ExceptionVirtualAddress = PIMAGE_NT_HEADERS64((ULONG64)ImageBase + ((PIMAGE_DOS_HEADER)ImageBase)->e_lfanew)->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress;

	PIMAGE_EXPORT_DIRECTORY ExportDirectory = (PIMAGE_EXPORT_DIRECTORY)((ULONG64)ImageBase + ExceptionVirtualAddress);

	PVOID NameStrPrAddr = (PVOID)(ExportDirectory->AddressOfNames + (ULONG64)ImageBase);
	PVOID FunlstPrAddr = (PVOID)(ExportDirectory->AddressOfFunctions + (ULONG64)ImageBase);
	PVOID OrdinallstPrAddr = (PVOID)(ExportDirectory->AddressOfNameOrdinals + (ULONG64)ImageBase);

	WORD OrdinallstPrAddrtrPr = 0;
	PVOID NameStrPr = NULL;
	for (DWORD I = 0; I < ExportDirectory->NumberOfNames; I++)
	{
		OrdinallstPrAddrtrPr = *(PWORD)OrdinallstPrAddr;
		NameStrPr = (PVOID)(*(PDWORD)NameStrPrAddr + (ULONG64)ImageBase);

		if (GetHashValue((LPCSTR)NameStrPr) == wFunc)
			return (PVOID)((ULONG64)ImageBase + (DWORD)(*(PULONG64)((PVOID)((ULONG64)FunlstPrAddr + (sizeof(DWORD) * (OrdinallstPrAddrtrPr))))));

		NameStrPrAddr = (PVOID)((ULONG64)NameStrPrAddr + sizeof(DWORD));
		OrdinallstPrAddr = (PVOID)((ULONG64)OrdinallstPrAddr + sizeof(WORD));
	}

	//VMProtectEnd();
	return 0;
}


__inline DWORD GetRawOffset(PIMAGE_NT_HEADERS64 pINH, DWORD dwVRA)
{
	DWORD64 sectionLocation = (DWORD64)IMAGE_FIRST_SECTION(pINH);
	for (int i = 0; i < pINH->FileHeader.NumberOfSections; i++)
	{
		PIMAGE_SECTION_HEADER pISH = (PIMAGE_SECTION_HEADER)sectionLocation;
		if (dwVRA >= pISH->VirtualAddress && dwVRA <= pISH->VirtualAddress + pISH->Misc.VirtualSize)
		{
			return dwVRA - pISH->VirtualAddress + pISH->PointerToRawData;
		}

		sectionLocation += sizeof(IMAGE_SECTION_HEADER);
	}

	return 0;
}


PVOID MyGetFileAddress(BYTE* pbImage, unsigned short wFunc)
{
	//VMProtectBeginUltra("MyGetFileAddress");

	PIMAGE_NT_HEADERS64 pINH = (PIMAGE_NT_HEADERS64)(pbImage + ((PIMAGE_DOS_HEADER)pbImage)->e_lfanew);
	DWORD dwRawOffset = GetRawOffset(pINH, pINH->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress);
	PIMAGE_EXPORT_DIRECTORY pIED = (PIMAGE_EXPORT_DIRECTORY)(pbImage + dwRawOffset);

	PDWORD Address = (PDWORD)(pbImage + GetRawOffset(pINH, pIED->AddressOfFunctions));

	PDWORD Name = (PDWORD)(pbImage + GetRawOffset(pINH, pIED->AddressOfNames));
	PWORD Ordinal = (PWORD)(pbImage + GetRawOffset(pINH, pIED->AddressOfNameOrdinals));

	for (DWORD i = 0; i < pIED->NumberOfNames; i++)
	{
		if (GetHashValue((LPCSTR)(pbImage + GetRawOffset(pINH, Name[i]))) == wFunc)
			return (PVOID)GetRawOffset(pINH, Address[Ordinal[i]]);
	}

	//VMProtectEnd();
	return 0;
}


void MakeRandData(BYTE* pbBuffer, int nLen)
{
	for (int i = 0; i < nLen; i++)
		pbBuffer[i] = (BYTE)rand();
}