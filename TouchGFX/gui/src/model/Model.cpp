#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "main.h"

extern uint16_t countCross;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	if(countCross != NULL)
	{
		valueUpdate();
	}
}

void Model::valueUpdate()
{
	modelListener->valueUpdate(countCross-1);
}
