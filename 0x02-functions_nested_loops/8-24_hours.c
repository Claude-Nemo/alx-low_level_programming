#include "main.h"
/**
 * jack_bauer - print hrs and mins
 */
void jack_bauer(void)
{
	int h, m, h_mod, m_mod;

	h = 0;
	m = 0;
	while (h <= 23)
	{
		while (m <= 59)
		{
			m_mod = m % 10;
			h_mod = h % 10;
			_putchar(h / 10 + '0');
			_putchar(h_mod + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m_mod + '0');
			m++;
			_putchar('\n');
		}
		h++;
		m = 0;
	}
}
