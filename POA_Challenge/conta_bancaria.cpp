#include "conta_bancaria.h"
#include <iostream>

ContaBancaria::ContaBancaria(const std::string& titular, double saldo)
    : titular(titular), saldo(saldo) {}

void ContaBancaria::depositar(double valor) {
    saldo += valor;
}

void ContaBancaria::exibirSaldo() const {
    std::cout << "Titular: " << titular << ", Saldo: " << saldo << std::endl;
}

ContaCorrente::ContaCorrente(const std::string& titular, double saldo)
    : ContaBancaria(titular, saldo) {}

bool ContaCorrente::sacar(double valor) {
    if (valor <= saldo) {
        saldo -= valor;
        return true;
    }
    return false;
}

ContaSalario::ContaSalario(const std::string& titular, double saldo)
    : ContaBancaria(titular, saldo) {}

bool ContaSalario::sacar(double valor) {
    if (valor <= saldo) {
        saldo -= valor;
        return true;
    }
    return false;
}

ContaPoupanca::ContaPoupanca(const std::string& titular, double saldo)
    : ContaBancaria(titular, saldo) {}

bool ContaPoupanca::sacar(double valor) {
    if (valor <= saldo) {
        saldo -= valor;
        return true;
    }
    return false;
}

ContaInvestimento::ContaInvestimento(const std::string& titular, double saldo)
    : ContaBancaria(titular, saldo) {}

bool ContaInvestimento::sacar(double valor) {
    if (valor <= saldo) {
        saldo -= valor;
        return true;
    }
    return false;
}

