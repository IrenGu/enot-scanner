/*
    File:    keyword_init_table.cpp
    Created: 10 February 2019 at 10:49 Moscow time
    Author:  Гаврилов Владимир Сергеевич
    E-mails: vladimir.s.gavrilov@gmail.com
             gavrilov.vladimir.s@mail.ru
             gavvs1977@yandex.ru
*/

#include "../include/keyword_init_table.h"
#include "../include/mysize.h"

namespace enot_scanner{
    const State_for_char keyword_init_table[] = {
        {0,   U'б'}, {26,  U'в'}, {48,  U'д'},
        {51,  U'е'}, {55,  U'и'}, {60,  U'л'},
        {72,  U'м'}, {81, U'н'},  {94, U'о'},
        {102, U'п'}, {139, U'р'}, {149, U'с'},
	    {171, U'т'}, {175, 'у'},  {180, U'ф'},
		{183, U'ц'}, {195, U'ч'}, {201, U'ш'},
		{206, U'I'}, {217, U'R'}, {227, 'm'}
    };

    const std::size_t    keyword_init_table_size = size(keyword_init_table);
};