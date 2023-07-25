#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <string>

class ContaBancaria {
protected:
	std::string titular;
	double saldo;

public:
	ContaBancaria(const std::string& titular, double saldo);
	virtual ~ContaBancaria() {}

	virtual void depositar(double valor);
	virtual bool sacar(double valor) = 0;
	virtual void exibirSaldo() const;
};

class ContaCorrente : public ContaBancaria {
public:
	ContaCorrente(const std::string& titular, double saldo);
	virtual ~ContaCorrente() {}

	virtual bool sacar(double valor) override;
};

class ContaSalario : public ContaBancaria {
public:
	ContaSalario(const std::string& titular, double saldo);
	virtual ~ContaSalario() {}

	virtual bool sacar(double valor) override;
};

class ContaPoupanca : public ContaBancaria {
public:
	ContaPoupanca(const std::string& titular, double saldo);
	virtual ~ContaPoupanca() {}

	virtual bool sacar(double valor) override;
};

class ContaInvestimento : public ContaBancaria {
public:
	ContaInvestimento(const std::string& titular, double saldo);
	virtual ~ContaInvestimento() {}

	virtual bool sacar(double valor) override;
};

#endif // CONTA_BANCARIA_H


