#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "weapons.h"
#include "player.h"
#include "gamerules.h"

class MyCustomEntity :public CBaseEntity
{
public:
	void MyCustomEntity::Spawn() 
	{
		ALERT(at_console, "this is my custom entity");
	}
};

LINK_ENTITY_TO_CLASS(my_custom_entity, MyCustomEntity);
