
#include <iostream>
#include "conta_bancaria.h"
#include "LoggingAspect.aj"

int main() {
	ContaCorrente cc("João da Silva", 1000);
	ContaSalario cs("Maria Santos", 500);
	ContaPoupanca cp("Ana Oliveira", 2000);
	ContaInvestimento ci("Pedro Machado", 3000);

	cc.exibirSaldo();
	cs.exibirSaldo();
	cp.exibirSaldo();
	ci.exibirSaldo();

	cc.sacar(500);
	cs.sacar(800);
	cp.sacar(300);
	ci.sacar(5000);

	cc.exibirSaldo();
	cs.exibirSaldo();
	cp.exibirSaldo();
	ci.exibirSaldo();

	return 0;
}


