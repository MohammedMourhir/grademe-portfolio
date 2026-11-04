// clamp must return v held inside lo and hi, and lo when the bounds are inverted.
// This file does not build yet: three diagnostics, clear them one at a time.
int	clamp(int v, int lo, int hi)
{
	int	range;
	(void)range;

	if (lo > hi)
		return(lo);
	

	if (lo == hi)
		return(hi);
	if (v < lo)
		return (lo);
	if (v > hi)
		return (hi);
	return (v);
}
