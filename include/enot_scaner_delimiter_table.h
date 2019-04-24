

#ifndef ENOT_SCANER_DELIMITER_TABLE_H
#define ENOT_SCANER_DELIMITER_TABLE_H
#   include "../include/elem.h"
#   include "../include/enot_lexeme.h"
namespace enot_scanner{
    extern const trans_table::Elem<Lexem_code> delimiters_jump_table[];
};
#endif