         gavvs1977@yandex.ru
*/

#include <cstdio>
#include "../include/test_enot_scaner.h"
#include "../include/enot_lexeme.h"

void test_enot_scaner(const std::shared_ptr<enot_scanner::Scanner>& enotsc)
{
    lynx_scanner::Lynx_token lti;
    lynx_scanner::Lexem_code llc;
    do{
        lti    = lynxsc->current_lexeme();
        llc   = lti.lexeme_.code_;
        auto s = lynxsc->token_to_string(lti);
        puts(s.c_str());
    }while(llc != lynx_scanner::Lexem_code::Nothing);
}