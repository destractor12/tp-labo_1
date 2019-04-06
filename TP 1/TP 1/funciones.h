

/** \brief muestra el menu de opciones al usuario
 *
 * \return int devuelve la opcion elegida por el usuario
 *
 */

int mostrarMenu(float,float);

/** \brief le pide al usuario que ingrese un numero
 *
 * \param char[] mensaje que se le muestra al usuario
 * \return float devuelve el numero ingresado por el usuario
 *
 */
float getfloat(char[]);

/** \brief suma los numeros ingresados por el usuario
 *
 * \param float primer operando
 * \param float segundo operando
 * \return float resultado de la suma entre los operandos
 *
 */
float SumarOperandos(float,float);

/** \brief resta los numeros ingresados por el usuario
 *
 * \param float primer operando
 * \param float segundo operando
 * \return float resultado de la resta entre los operandos
 *
 */
float restadeoperandos(float,float);

/** \brief divide los numeros ingresados por el usuario
 *
 * \param float primer operando
 * \param float segundo operando
 * \return float resultado de la division entre los operandos
 *
 */
float divisiondeoperandos(float,float);

/** \brief multiplica los numeros ingresados por el usuario
 *
 * \param float primer operando
 * \param float segundo operando
 * \return float resultado de la multiplicacion entre los operandos
 *
 */
float multiplicaciondeoperandos(float,float);

/** \brief muestra resultados
 *
 * \param float resultados de las operaciones
 * \param char[] mensaje que se concatena
 * \return void mensaje que muestra los resultados
 *
 */
void mostrarResultados(float,char[]);

/** \brief muestra resultados
 *
 * \param int resultado de la factorizacion
 * \param char[] mensaje que se concatena
 * \return void mensaje que muestra los resultados
 *
 */
void mostrarResultatres(int,char[]);

/** \brief permite el ingreso de un caracter
 *
 * \param char[] mensaje que se le muestra al usuario
 * \return char caracter ingresado por el usuario
 *
 */
char getletra(char[]);

/** \brief permite el ingreso de un entero y lo valida
 *
 * \param char[] mensaje que se mostrara
 * \param int minimo del rango de validacion
 * \param int maximo del rango de validacion
 * \return int numero ingresado y ya validado
 *
 */
int pedirEntero(char[],int,int);

/** \brief valida un entero
 *
 * \param int entero a validar
 * \param char[] mensaje que se le muestra al usuario
 * \param int valor minimo
 * \param int valor maximo
 * \return int numero validado
 *
 */
int validarEntero(int,char[],int,int);

/** \brief calcula el factorial de un numero
 *
 * \param int numero ingresado por el usuario
 * \return int factorial del numero ingresado
 *
 */
int factorial(float);
