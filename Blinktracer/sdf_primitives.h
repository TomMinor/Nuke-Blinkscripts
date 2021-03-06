float sdSphere(float3 _p, float _radius)
{
	return length(_p) - _radius;
}

float sdBox(float3 _p, float3 _bounds)
{
	float3 d = fabs(_p) - _bounds;

	float a = max(d.y, d.z);
	float b = max(d.x, a);

	return min(b, 0.0f) + length( max(d, 0.0f) );
}


float sdPlane( float3 p, float4 n )
{
	float3 tmpN = float3( n.x, n.y, n.z );
  	// n must be normalized
  	return dot(p, tmpN) + n.w;
}