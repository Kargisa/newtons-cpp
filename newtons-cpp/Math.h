#pragma once

namespace Newtons {
	class Math {
	public:
		Math() = delete;
		static float PI();
		static float Sqrt(float value);
		static float Lerp(float a, float b, float t);
		static float Min(float a, float b);
		static float Max(float a, float b);
		static float Abs(float value);
	};

	inline float Math::PI() {
		return 3.1415927f;
	}

	inline float Math::Sqrt(float value) {
		return sqrt(value);
	}

	inline float Math::Lerp(float a, float b, float t) {
		return a + (b - a) * t;
	}

	inline float Math::Min(float a, float b) {
		return fmin(a, b);
	}

	inline float Math::Max(float a, float b) {
		return fmax(a, b);
	}

	inline float Math::Abs(float value) {
		return abs(value);
	}
} // namespace Newtons