float3 repeatXYZ(float3 _p, float3 _s)
{
	// return float3(1.0f,1.0f,1.0f);
	return fmod(_p, _s) - float3(_s / 2.0f);
}