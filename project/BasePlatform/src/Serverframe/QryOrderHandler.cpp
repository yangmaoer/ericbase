﻿#include "QryOrderHandler.h"

////////////////////////////////////////////////////////////////////////////////
namespace serverframe{;

////////////////////////////////////////////////////////////////////////////////
void QryOrderHandler::OnRequest(IN AmqContext& context)
{
	try 
	{
		APP_LOGIN *ptrData = (APP_LOGIN *)context.c_str();

		std::cout << ptrData->mobile << std::endl;

		return;
	}
	catch (...)
	{
		
	}
}

////////////////////////////////////////////////////////////////////////////////
}// serverframe
