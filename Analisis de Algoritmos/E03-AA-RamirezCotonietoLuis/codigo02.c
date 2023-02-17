//Codigo 02
// Se utiliza la operación de modulo a y b

func MaximoComunDivisor(m,n){
	a = max(n,m);
	b = min(n,m);
	residuo = 1;
	while(residuo > 0){
		residuo = a%b;			//->	1 (asignación de módulo)
		a = b;
		b = residuo;
	}
	MaximoComunDivisor = a;
	return MaximoComunDivisor;
}
