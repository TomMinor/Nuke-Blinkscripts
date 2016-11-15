// ---------------------------------------------------------------------------
// Replacement GLSL style functions for the builtins / missing functionality
// ---------------------------------------------------------------------------

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