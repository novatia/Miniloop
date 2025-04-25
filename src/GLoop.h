/*
 Name:		GLoop.h
 Created:	11/27/2023 08:25:24 AM
 Author:	A.Novati
*/

#pragma once

namespace MiniLoop {
	
	class GLoop
	{
	public:
		virtual void Update() = 0;
		virtual void Setup() = 0;
	};

}