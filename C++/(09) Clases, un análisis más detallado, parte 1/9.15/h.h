#pragma once
#ifndef TRESENRAYA_H
#define TRESENRAYA_H

class TresEnRaya
{
public:
	TresEnRaya();
	~TresEnRaya();
	void ingresarDatos();
	bool estatusDelJuego();
	void impresionDelJuego();
private:
	char gatito[3][3];
};

#endif;