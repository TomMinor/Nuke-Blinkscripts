// ---------------------------------------------------------------------------
// Replacement GLSL style functions for the builtins / missing functionality
// ---------------------------------------------------------------------------

float mix( float _x, float _y, float _a)
{
	return _x * (1.0f - _a) + _y * _a;
}

float2 mix( float2 _x, float2 _y, float _a)
{
	return _x * (1.0f - _a) + _y * _a;
}

float3 mix( float3 _x, float3 _y, float _a)
{
	return _x * (1.0f - _a) + _y * _a;
}

float4 mix( float4 _x, float4 _y, float _a)
{
	return _x * (1.0f - _a) + _y * _a;
}

float fract( float _x )
{
	return _x - floor(_x);
}

float radians(float _degrees)
{
	return (PI * _degrees) / 180.0f;
}

float degrees(float _radians)
{
	return (180.0 * _radians) / PI;
}

// float fmod(float _x, float _s)
// {
// 	return _x - _s * floor(_x / _s);
// }

float3 fmod(float3 _p, float _s)
{
	return float3(
			fabs(fmod(_p.x, _s)),
			fabs(fmod(_p.y, _s)),
			fabs(fmod(_p.z, _s))
		);
}

float3 fmod(float3 _p, float3 _s)
{
	return float3(
		fabs(fmod(_p.x, _s.x)),
		fabs(fmod(_p.y, _s.y)),
		fabs(fmod(_p.z, _s.z))
		);
}

float3 max(float3 _p, float _v)
{
	float a = max(_p.x, _v);
	float b = max(_p.y, _v);
	float c = max(_p.z, _v);

	// Return a component wise comparison (glsl style)
	return float3(a,b,c);
}

float4 max(float4 _p, float _v)
{
	float a = max(_p.x, _v);
	float b = max(_p.y, _v);
	float c = max(_p.z, _v);
	float d = max(_p.w, _v);

	// Return a component wise comparison (glsl style)
	return float4(a,b,c,d);
}