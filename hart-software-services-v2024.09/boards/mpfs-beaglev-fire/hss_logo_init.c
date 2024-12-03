/*******************************************************************************
 * Copyright 2019-2022 Microchip FPGA Embedded Systems Solutions.
 *
 * SPDX-License-Identifier: MIT
 *
 * MPFS HSS Embedded Software
 *
 */

/**
 * \file HSS Software Initalization
 * \brief Full System Initialization
 */

#include "config.h"
#include "hss_types.h"

#include "hss_init.h"
#include "hss_debug.h"

bool HSS_LogoInit(void)
{
    mHSS_PUTS("\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;188m \033[48;5;145m \033[48;5;188m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;102m \033[48;5;101m \033[48;5;137m \033[48;5;137m \033[48;5;144m \033[48;5;101m \033[48;5;102m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;144m \033[48;5;59m \033[48;5;101m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;144m \033[48;5;143m \033[48;5;137m \033[48;5;101m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;95m \033[48;5;137m \033[48;5;137m \033[48;5;58m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;181m \033[48;5;137m \033[48;5;137m \033[48;5;101m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;59m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;94m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;180m \033[48;5;181m \033[48;5;137m \033[48;5;101m \033[48;5;145m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;101m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;94m \033[48;5;101m \033[48;5;102m \033[48;5;58m \033[48;5;137m \033[48;5;188m \033[48;5;187m \033[48;5;102m \033[48;5;59m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;95m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;94m \033[48;5;95m \033[48;5;59m \033[48;5;58m \033[48;5;137m \033[48;5;188m \033[48;5;231m \033[48;5;230m \033[48;5;188m \033[48;5;145m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;101m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;101m \033[48;5;94m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;145m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;102m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;94m \033[48;5;137m \033[48;5;137m \033[48;5;187m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;102m \033[48;5;145m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;188m \033[48;5;95m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;94m \033[48;5;137m \033[48;5;144m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;102m \033[48;5;188m \033[48;5;188m \033[48;5;59m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;138m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;101m \033[48;5;101m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;59m \033[48;5;59m \033[48;5;16m \033[48;5;59m \033[48;5;188m [0m\n"
    "\033[48;5;231m \033[48;5;59m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;95m \033[48;5;224m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;59m \033[48;5;16m \033[48;5;59m \033[48;5;59m \033[48;5;188m [0m\n"
    "\033[48;5;231m \033[48;5;59m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;95m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;188m \033[48;5;102m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;59m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;101m \033[48;5;137m \033[48;5;95m \033[48;5;187m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;59m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;102m \033[48;5;101m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;137m \033[48;5;101m \033[48;5;101m \033[48;5;101m \033[48;5;94m \033[48;5;144m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;145m \033[48;5;95m \033[48;5;130m \033[48;5;102m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;188m \033[48;5;59m \033[48;5;101m \033[48;5;137m \033[48;5;137m \033[48;5;101m \033[48;5;101m \033[48;5;137m \033[48;5;137m \033[48;5;94m \033[48;5;137m \033[48;5;137m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;102m \033[48;5;59m \033[48;5;59m \033[48;5;16m \033[48;5;94m \033[48;5;166m \033[48;5;166m \033[48;5;131m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;59m \033[48;5;59m \033[48;5;94m \033[48;5;95m \033[48;5;94m \033[48;5;94m \033[48;5;94m \033[48;5;137m \033[48;5;137m \033[48;5;143m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;145m \033[48;5;102m \033[48;5;59m \033[48;5;16m \033[48;5;59m \033[48;5;130m \033[48;5;166m \033[48;5;95m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;145m \033[48;5;145m \033[48;5;188m \033[48;5;188m \033[48;5;59m \033[48;5;101m \033[48;5;101m \033[48;5;137m \033[48;5;144m \033[48;5;144m \033[48;5;181m \033[48;5;224m \033[48;5;188m \033[48;5;145m \033[48;5;145m \033[48;5;144m \033[48;5;102m \033[48;5;59m \033[48;5;145m \033[48;5;188m \033[48;5;102m \033[48;5;59m \033[48;5;188m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;59m \033[48;5;188m \033[48;5;145m \033[48;5;188m \033[48;5;59m \033[48;5;137m \033[48;5;144m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;137m \033[48;5;137m \033[48;5;102m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;102m \033[48;5;101m \033[48;5;102m \033[48;5;145m \033[48;5;95m \033[48;5;137m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;180m \033[48;5;137m \033[48;5;95m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;188m \033[48;5;59m \033[48;5;101m \033[48;5;59m \033[48;5;101m \033[48;5;137m \033[48;5;230m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;181m \033[48;5;137m \033[48;5;95m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;59m \033[48;5;101m \033[48;5;58m \033[48;5;137m \033[48;5;137m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;137m \033[48;5;101m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;59m \033[48;5;137m \033[48;5;137m \033[48;5;101m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;137m \033[48;5;101m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;102m \033[48;5;94m \033[48;5;137m \033[48;5;101m \033[48;5;188m \033[48;5;231m \033[48;5;188m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;137m \033[48;5;101m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;59m \033[48;5;137m \033[48;5;95m \033[48;5;188m \033[48;5;231m \033[48;5;188m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;137m \033[48;5;101m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;95m \033[48;5;95m \033[48;5;188m \033[48;5;231m \033[48;5;188m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;101m \033[48;5;102m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;95m \033[48;5;95m \033[48;5;188m \033[48;5;231m \033[48;5;188m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;101m \033[48;5;101m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;95m \033[48;5;137m \033[48;5;101m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;101m \033[48;5;137m \033[48;5;101m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;102m \033[48;5;137m \033[48;5;137m \033[48;5;102m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;188m \033[48;5;188m \033[48;5;145m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;101m \033[48;5;137m \033[48;5;101m \033[48;5;187m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;102m \033[48;5;94m \033[48;5;95m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;59m \033[48;5;145m \033[48;5;144m \033[48;5;102m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;101m \033[48;5;95m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;145m \033[48;5;59m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;145m \033[48;5;145m \033[48;5;231m \033[48;5;188m \033[48;5;59m \033[48;5;145m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;101m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;102m \033[48;5;59m \033[48;5;102m \033[48;5;59m \033[48;5;102m \033[48;5;194m \033[48;5;231m \033[48;5;231m \033[48;5;187m \033[48;5;59m \033[48;5;59m \033[48;5;102m \033[48;5;59m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;188m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;188m \033[48;5;188m \033[48;5;188m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m \033[48;5;231m [0m\n"
    "\n"
    "---------------------------------\n"
    "--        BeagleV-Fire         --\n"
    "---------------------------------\n"
    "\n");

    return true;
}

