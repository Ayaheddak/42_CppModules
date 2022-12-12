#ifndef ITER_HPP
#define ITER_HPP
template <typename T>
void iter(T *arr, unsigned int len, void(*f)(&))
{
	for(int i = 0; i < len, i++)
		(*f)(arr[i]);
}
#endif