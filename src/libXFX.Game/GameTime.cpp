// Copyright (C) XFX Team
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions are met:
// 
//* Redistributions of source code must retain the above copyright 
//notice, this list of conditions and the following disclaimer.
//* Redistributions in binary form must reproduce the above copyright 
//notice, this list of conditions and the following disclaimer in the 
//documentation and/or other materials provided with the distribution.
//* Neither the name of the copyright holder nor the names of any 
//contributors may be used to endorse or promote products derived from 
//this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE 
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
// POSSIBILITY OF SUCH DAMAGE.

#include <GameTime.h>
#include <System/Type.h>

namespace XFX
{
	const Type GameTimeTypeInfo("GameTime", "XFX::GameTime", TypeCode::Object);

	bool GameTime::IsRunningSlowly() const
	{
		return _isRunningSlowly;
	}
	
	TimeSpan GameTime::getTotalGameTime() const
	{
		return _totalGameTime;
	}
	
	TimeSpan GameTime::getElapsedGameTime() const
	{
		return _elapsedGameTime;
	}
	
	GameTime::GameTime()
	{
	}
	
	GameTime::GameTime(const TimeSpan totalGameTime, const TimeSpan elapsedGameTime)
		: _elapsedGameTime(elapsedGameTime), _isRunningSlowly(false), _totalGameTime(totalGameTime)
	{
	}
	
	GameTime::GameTime(const TimeSpan totalGameTime, const TimeSpan elapsedGameTime, const bool isRunningSlowly)
		: _elapsedGameTime(elapsedGameTime), _isRunningSlowly(isRunningSlowly), _totalGameTime(totalGameTime)
	{
	}

	const Type& GameTime::GetType()
	{
		return GameTimeTypeInfo;
	}
}
