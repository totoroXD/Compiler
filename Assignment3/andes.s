    .text
    .align  2
    .global main
    .type   main, @function
sub:
    push.s {$fp $lp}
    addi $fp, $sp, 8
    addi $sp, $sp, -24
    swi $r0,[$fp+(-8)]
    swi $r1,[$fp+(-12)]
    movi $r0, 0
    swi $r0,[$fp+(-16)]

    movi $r0, 1
    swi $r0,[$fp+(-20)]

    lwi $r0,[$fp+(-12)]
    swi $r0,[$sp]
    addi $sp, $sp, -4
    lwi $r0,[$fp+(-8)]
    swi $r0,[$sp]
    addi $sp, $sp, -4

    lwi $r0,[$sp+8]
    lwi $r1,[$sp+4]
    sub $r0, $r0, $r1
    swi $r0,[$sp+8]
    addi $sp, $sp, 4

    lwi $r0,[$fp+(-16)]
    swi $r0,[$sp]
    addi $sp, $sp, -4

    lwi $r0,[$sp+8]
    lwi $r1,[$sp+4]
    sub $r0, $r0, $r1
    swi $r0,[$sp+8]
    addi $sp, $sp, 4

    lwi $r0,[$fp+(-20)]
    swi $r0,[$sp]
    addi $sp, $sp, -4

    lwi $r0,[$sp+8]
    lwi $r1,[$sp+4]
    sub $r0, $r0, $r1
    swi $r0,[$sp+8]
    addi $sp, $sp, 4

    addi $sp, $fp, -8
    pop.s {$fp $lp}
    ret
    addi $sp, $fp, -8
    pop.s {$fp $lp}
    ret
main:
    push.s {$fp $lp}
    addi $fp, $sp, 8
    addi $sp, $sp, -24
    movi $r0, 1
    swi $r0,[$fp+(-12)]

    movi $r0, 2
    swi $r0,[$fp+(-16)]

    movi $r0, 3
    swi $r0,[$fp+(-20)]

    movi $r0, 10
    swi $r0,[$sp]
    addi $sp, $sp, -4
    movi $r0, 2
    swi $r0,[$sp]
    addi $sp, $sp, -4
    lwi $r0,[$sp+8]
    lwi $r1,[$sp+4]
    divsr $r0, $r7, $r0, $r1
    swi $r0,[$sp+8]
    addi $sp, $sp, +4

    swi $r0,[$fp+(-8)]
    addi $sp, $sp, 4

    lwi $r0,[$fp+(-12)]
    swi $r0,[$sp]
    addi $sp, $sp, -4
    movi $r0, 3
    swi $r0,[$sp]
    addi $sp, $sp, -4

    lwi $r0,[$sp+8]
    lwi $r1,[$sp+4]
    add $r0, $r0, $r1
    swi $r0,[$sp+8]
    addi $sp, $sp, 4

    movi $r0, 4
    swi $r0,[$sp]
    addi $sp, $sp, -4

    lwi $r0,[$sp+8]
    lwi $r1,[$sp+4]
    mul $r0, $r0, $r1
    swi $r0,[$sp+8]
    addi $sp, $sp, 4

    movi $r0, 5
    swi $r0,[$sp]
    addi $sp, $sp, -4

    lwi $r0,[$sp+8]
    lwi $r1,[$sp+4]
    sub $r0, $r0, $r1
    swi $r0,[$sp+8]
    addi $sp, $sp, 4


    swi $r0,[$fp+(-16)]
    addi $sp, $sp, 4

    movi $r0, 10
    swi $r0,[$sp]
    addi $sp, $sp, -4
    movi $r0, 8
    swi $r0,[$sp]
    addi $sp, $sp, -4
    lwi $r0,[$sp+4]
    addi $sp, $sp, -4
    lwi $r1,[$sp+4]
    addi $sp, $sp, -4
    jal sub

    swi $r0,[$fp+(-12)]
    addi $sp, $sp, 4

    movi $r0, 0
    swi $r0,[$sp]
    addi $sp, $sp, -4
    addi $sp, $fp, -8
    pop.s {$fp $lp}
    ret
    addi $sp, $fp, -8
    pop.s {$fp $lp}
    ret
    .size   main, .-main
    .ident  "GCC: (GNU) 4.9.0"
