public aspect LoggingAspect {
    pointcut allAccounts() : call(boolean ContaBancaria.sacar(double));

    before(double valor) : allAccounts() {
        if (!((ContaBancaria) thisJoinPoint.getTarget()).sacar(valor)) {
            System.err.println("Saldo insuficiente para sacar: " + valor);
        }
    }
}

