#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

/** \brief Operacion que permite sumar
 *
 * \param numeroUno float Primer operando
 * \param numeroDos float Segundo operando
 * \return float Resultado final
 *
 */
float sumar(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno + numeroDos;
    return printf("La suma da: %.2f\n", resultado);
}

/** \brief Operacion que permite restar
 *
 * \param numeroUno float Primer numero Minuendo
 * \param numeroDos float Segundo numero Sustraendo
 * \return float Resultado final
 *
 */
float restar(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno - numeroDos;
    return printf("La resta da: %.2f\n", resultado);
}

 /** \brief Operacion que permite multiplicar
 *  Incluye una correccion al multiplicar un numero negativo por cero
 * \param numeroUno float Primer numero / factor
 * \param numeroDos float Segundo numero / factor
 * \return float Resultado final / Producto
 *
 */
float multiplicar(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno * numeroDos;
    if (resultado == -0)
    {
        resultado = 0;
    }
    return printf("La multiplicacion da: %.2f\n", resultado);
}

/** \brief Operacion que permite dividir,
 *  Incluye una condicion de error al dividir por cero y una correccion de dividir al cero por un numero negativo
 * \param numeroUno float Primer numero / Dividendo
 * \param numeroDos float Segundo numero / Divisor
 * \return float Resultado final
 *
 */
float dividir(float numeroUno, float numeroDos)
{
    float resultado;
    if (numeroDos == 0)
    {
        return printf("ERROR: NO SE PUEDE DIVIDIR POR CERO\n");
    }
    resultado = numeroUno / numeroDos;
    if (resultado == -0)
    {
        resultado = 0;
    }
    return printf("La division da: %.2f\n", resultado);
}


/** \brief Operacion que permite obtener factorial del primer numero,
 *  Incluye error por numero negativo  y resultado 1 del factorial del 0. Si el numero tiene decimales, opera unicamente la parte entera.
 * \param numeroUno int Primer numero (a ser factorizado)
 * \return int Segundo numero / Factorial
 *
 */
int sacarFactorialUno(int numeroUno)
{
    int resultado=numeroUno;
    if (numeroUno <= 1)
    {
        return 1;
    }
    resultado = resultado * sacarFactorialUno(numeroUno - 1);
    return resultado;
}

/** \brief Idem anterior pero con el segundo numero
 *
 * \param
 * \param
 * \return
 *
 */
int sacarFactorialDos(int numeroDos)
{
    int resultado=numeroDos;
    if (numeroDos <= 1)
    {
        return 1;
    }
    resultado = resultado * sacarFactorialDos(numeroDos - 1);
    return resultado;
}

