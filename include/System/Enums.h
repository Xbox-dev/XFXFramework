/****************************************************************
 *	Enums.h														*
 *		Defines enumerations used in the System namespace		*
 *																*
 *		Enumerations are defined inside structs to prevent		*
 *		namespace pollution, and easier distinction.			*
 ****************************************************************/
#ifndef _SYSTEM_ENUMS_
#define _SYSTEM_ENUMS_

namespace System
{
	/// <summary>
	/// Specifies whether a System::DateTime object represents a local time, a Coordinated Universal Time (UTC), or is
	/// not specified as either local time or UTC.
	/// </summary>
	struct DateTimeKind
	{
		enum type
		{
			Local = 2,
			Unspecified = 0,
			Utc = 1
		};
	};

	/// <summary>
	/// Specifies the day of the week.
	/// </summary>
	struct DayOfWeek
	{
		enum type
		{
			Friday = 5,
			Monday = 1,
			Saturday = 6,
			Sunday = 0,
			Thursday = 4,
			Tuesday = 2,
			Wednesday = 3
		};
	};
	/// <summary>
	/// Identifies the operating system, or platform, supported by an assembly.
	/// </summary>
	struct PlatformID
	{
		enum type
		{
			MacOSX = 6,
			Unix = 4,
			Win32S = 0,
			Win32Windows = 1,
			WinCE = 3,
			Xbox = 5
		};
	};

	/// <summary>
	/// Specifies the culture, case, and sort rules to be used by certain overloads
	/// of the String::Compare(String,String) and String::Equals(System.Object) methods.
	/// </summary>
	struct StringComparison
	{
		enum type
		{
			CurrentCulture,
			CurrentCultureIgnoreCase,
			InvariantCulture,
			InvariantCultureIgnoreCase,
			Ordinal,
			OrdinalIgnoreCase
		};
	};

	/// <summary>
	/// Specifies whether applicable Overload:String::Split method overloads include or omit empty substrings from the return value.
	/// </summary>
	struct StringSplitOptions
	{
		enum type
		{
			None,
			RemoveEmptyEntries
		};
	};

	typedef DateTimeKind::type				DateTimeKind_t;
	typedef DayOfWeek::type					DayOfWeek_t;
	typedef PlatformID::type				PlatformID_t;
	typedef StringComparison::type			StringComparison_t;
	typedef StringSplitOptions::type		StringSplitOptions_t;
}

#endif //_SYSTEM_ENUMS_