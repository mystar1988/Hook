#pragma once

#include <string>
#include <cmath>


namespace Capture
{
	namespace Hook
	{
		class TextDisplay
		{
		private:
			bool privateDisplay = false;
			std::wstring privateText;
			TimeSpan privateDuration;

			long long _startTickCount = 0;

		public:
			TextDisplay();

			/// <summary>
			/// Must be called each frame
			/// </summary>
			void Frame();

				const bool &getDisplay() const;
				void setDisplay(const bool &value);
				const std::wstring &getText() const;
				void setText(const std::wstring &value);
				const TimeSpan &getDuration() const;
				void setDuration(const TimeSpan &value);
			const float &getRemaining() const;
		};
	}
}
