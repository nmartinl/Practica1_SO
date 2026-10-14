/**
 * @file servidor_fifo.c
 * @brief Servidor IPC que utiliza FIFO (tuberías nombradas) para atender consultas
 *        sobre el archivo CSV sin cargarlo completamente en RAM.
 */

#include "common.h"
#include <ctype.h>

static volatile int keep_running = 1;

/**
 * @brief Manejador de señales para captura de SIGINT (Ctrl+C).
 */
void handle_sigint(int sig) {
    (void)sig;
    keep_running = 0;
    printf("\n[SERVIDOR-FIFO] Recibida señal de terminación. Cerrando servidor...\n");
}

/**
 * @brief Convierte una cadena a minúsculas para comparaciones no sensibles a mayúsculas.
 */
void to_lowercase(char *str) {
    for (; *str; ++str) *str = (char)tolower(*str);
}

int main(void) {
        return 0;
}