
typedef struct
{
    char nombres [50];
    char edad;
    long dni;
    int estado;


} ePersona;


void cargarPersona(ePersona [], int);
/** \brief Funcion para dar de alta a una o mas personas.
 *
 * \param recibe el parametro "nombre" de la estructura.
 * \param entero con valor 0 para recorrer el vector.
 * \return
 *
 */

void borrarPersona(ePersona [], int );
/** \brief Funcion para dar de baja a una o mas personas.
 *
 * \param recibe el parametro "dni" de la estructura.
 * \param entero con valor 0 para recorrer el vector DNI y estado.
 */
void mostrarPersona(ePersona per);
/** \brief Funcion para mostrar a una persona
 *
 * \param recibe el parametro "dni" de la estructura.
 * \param entero con valor 0 para recorrer el vector persona.
 */
void ordenarPersonas(ePersona [], int );
/** \brief Funcion para ordenar a las personas ingresadas por nombre .
 *
 * \param recibe el parametro "nombres" de la estructura.
 * \param entero con valor 0 para recorrer el vector persona.
 */
void mostrarPersonas(ePersona lista[], int );
/** \brief Funcion para mostrar a todas las personas.
 *
 * \param recibe el parametro "nombre" de la estructura.
 * \param entero con valor 0 para recorrer el vector personas.

 */
