LÓGICA DE PROGRAMAÇÃO - IF e ELSE

Exercícios:

1)

nota1 = float(input("Nota 1:"))
nota2 = float(input("Nota 2:"))
nota3 = float(input("Nota 3:"))
media = (nota1+nota2+nota3)/3
print(media)


2)

valor = float(input("Digite o valor em dolar: "))
emreais = valor/5.4
print(f"US${valor:,.2f} em reais é: R${emreais:,.2f}")


3)

valor = float(input("Digite o valor em reais: "))
emdolar = valor*5.4
print(f"R${valor:,.2f} em dolar: US${emdolar:,.2f}")


4)

saldo = float(input("Digite o valor um saldo: "))
reajuste = saldo/100
print("Após reajuste: ", (saldo+reajuste))


5)

saldo = float(input("Digite o valor um saldo: "))
reajuste = saldo*0.3333
print("Após reajuste: ", (saldo+reajuste))


6)

Fahrenheit = float(input("Digite a temperatura em Fahrenheit: "))
Celsius = (Fahrenheit - 32) / 1.8
print(f"a temperatura em celsius é: {Celsius:.2f} ")


7)

Celsius = float(input("Digite a temperatura em Celsius: "))
Fahrenheit = (Celsius * 1.8) + 32
print(f"a temperatura em Fahrenheit é:{Fahrenheit:,.2f}")


8)

salario = float(input("Salario: "))
percent = float(input("Aumento em %:"))
aumento = salario * (percent/100)
print("Aumento de :", aumento)
print("Novo salario:", salario+aumento)


9)

numero = int(input("Numero: )
if numero <0:
    print("Número negativo")
else:
    print("Número positivo")




10)


