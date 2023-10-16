export module Tex_Names;

export enum EnemyType { ASTEROID = 0, MARS, MOON, BOSS, ROCKET, BADBALL, HEALBALL };

export inline const char* toString(EnemyType type) {
	switch (type) {
	case ASTEROID: return "ASTEROID";
	case MARS: return "MARS";
	case MOON: return "MOON";
	case BOSS: return "BOSS";
	case ROCKET: return "ROCKET";
	case BADBALL: return "BADBALL";
	case HEALBALL: return "HEALBALL";
	}
}
export enum BulletType { BASIC = 0 };

export inline const char* toString(BulletType type) {
	switch (type)
	{
	case BASIC: return "BASIC";

	}
}