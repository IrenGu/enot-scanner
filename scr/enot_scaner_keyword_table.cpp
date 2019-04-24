
#include "../include/enot_scaner_keyword_table.h"

namespace enot_scanner{
    const trans_table::Elem<Lexem_code> keywords_jump_table[] = {
        {const_cast<char32_t*>(U"ео"),   Lexem_code::Id,                 1}, // 0:   б...
        {const_cast<char32_t*>(U"зc"),    Lexem_code::Id,                3}, // 1:   бе...
        {const_cast<char32_t*>(U"л"),    Lexem_code::Id,                 5}, // 2:   бо...
        {const_cast<char32_t*>(U"з"),    Lexem_code::Id,                 6}, // 3:   без...
		{const_cast<char32_t*>(U"к"),    Lexem_code::Id,                 7}, // 4:   бес...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_bolshoe,         0}, // 5:   бол
        {const_cast<char32_t*>(U"н"),    Lexem_code::Id,                 8}, // 6:   безз...
        {const_cast<char32_t*>(U"о"),    Lexem_code::Id,                 9}, // 7:   беск...
        {const_cast<char32_t*>(U"а"),    Lexem_code::Id,                10}, // 8:   беззн...
        {const_cast<char32_t*>(U"н"),    Lexem_code::Id,                11}, // 9:   беско...
        {const_cast<char32_t*>(U"ч"),    Lexem_code::Id,                12}, // 10:  беззна...
        {const_cast<char32_t*>(U"е"),    Lexem_code::Id,                13}, // 11:  бескон...
        {const_cast<char32_t*>(U"1368"), Lexem_code::Kw_bezzn,          14}, // 12:  беззнач...
        {const_cast<char32_t*>(U"ч"),    Lexem_code::Id,                18}, // 13:  бесконе..
        {const_cast<char32_t*>(U"26"),   Lexem_code::Id,                19}, // 14:  беззнач1...
        {const_cast<char32_t*>(U"2"),    Lexem_code::Id,                21}, // 15:  беззнач3...
		{const_cast<char32_t*>(U"4"),    Lexem_code::Id,                22}, // 16:  беззнач6...
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_bezzn8,          0}, // 17:  беззнач8
        {const_cast<char32_t*>(U"н"),    Lexem_code::Id,                23}, // 18:  бесконеч...
        {const_cast<char32_t*>(U"8"),    Lexem_code::Id,                24}, // 19:  беззнач12...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_bezzn16,         0}, // 20:  беззнач16
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_bezzn32,         0}, // 21:  беззнач32
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_bezzn64,         0}, // 22:  беззнач64
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_bezzn128,        0}, // 24:  беззн128
		{const_cast<char32_t*>(U""),     Lexem_code:: Kw_besconechno,    0}, // 25:  бесконечно
     

        {const_cast<char32_t*>(U"екры"), Lexem_code::Id,                27}, // 26:  в...
        {const_cast<char32_t*>(U"р"),    Lexem_code::Id,                31}, // 27:  ве...
        {const_cast<char32_t*>(U"л"),    Lexem_code::Id,                32}, // 28:  вк...
        {const_cast<char32_t*>(U"е"),    Lexem_code::Id,                33}, // 29:  вр...
        {const_cast<char32_t*>(U"бкх"),  Lexem_code::Id,                35}, // 30:  вы...
        {const_cast<char32_t*>(U"н"),    Lexem_code::Id,                37}, // 31:  вер...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_vkl,             0}, // 32:  вкл
        {const_cast<char32_t*>(U"м"),    Lexem_code::Id,                38}, // 33:  вре...
        {const_cast<char32_t*>(U"0"),    Lexem_code::Id,                39}, // 34:  выб...
        {const_cast<char32_t*>(U"л"),    Lexem_code::Id,                40}, // 35:  вык...
        {const_cast<char32_t*>(U"о"),    Lexem_code::Id,                41}, // 36:  вых...
        {const_cast<char32_t*>(U"у"),    Lexem_code::Id,                42}, // 37:  верн...
        {const_cast<char32_t*>(U"я"),    Lexem_code::Id,                43}, // 38:  врем...
        {const_cast<char32_t*>(U"р"),    Lexem_code::Id,                44}, // 39:  выбо...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_vykl,            0}, // 40:  выкл...
        {const_cast<char32_t*>(U"д"),    Lexem_code::Id,                45}, // 41:  выхо...
        {const_cast<char32_t*>(U"т"),    Lexem_code::Id,                46}, // 42:  верну...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_time,            0}, // 43:  время
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_vydelenie,       0}, // 44:  выбор
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_vyjdi,           0}, // 45:  выход
        {const_cast<char32_t*>(U"ь"),    Lexem_code::Id,                47}, // 46:  вернут...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_vernut,          0}, // 47:  вернуть
        

        {const_cast<char32_t*>(U"л"),    Lexem_code::Id,                49}, // 48:  д...
        {const_cast<char32_t*>(U"я"),    Lexem_code::Id,                50}, // 49:  дл...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_dlya,            0}, // 50:  для

        {const_cast<char32_t*>(U"с"),    Lexem_code::Id,                52}, // 51:  е...
        {const_cast<char32_t*>(U"л"),    Lexem_code::Id,                53}, // 52:  ес...
        {const_cast<char32_t*>(U"и"),    Lexem_code::Id,                54}, // 53:  есл...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_esli,            0}, // 54:  если

        {const_cast<char32_t*>(U"н"),    Lexem_code::Id,                56}, // 55:  и...
        {const_cast<char32_t*>(U"а"),    Lexem_code::Id,                57}, // 56:  ин...
        {const_cast<char32_t*>(U"ч"),    Lexem_code::Id,                58}, // 57:  ина...
        {const_cast<char32_t*>(U"у"),    Lexem_code::Id,                59}, // 58:  инач...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_inache,          0}, // 59:  иначе


        {const_cast<char32_t*>(U"о"),    Lexem_code::Id,                61}, // 60: л...
        {const_cast<char32_t*>(U"г"),    Lexem_code::Id,                62}, // 61: ло...
        {const_cast<char32_t*>(U"и"),    Lexem_code::Id,                63}, // 62: лог...
		{const_cast<char32_t*>(U"к"),    Lexem_code::Id,                64}, // 63: логи...
		{const_cast<char32_t*>(U"1368"), Lexem_code::Kw_log,            65}, // 64: логик...
        {const_cast<char32_t*>(U"6"),    Lexem_code::Id,                69}, // 65: лог1...
        {const_cast<char32_t*>(U"2"),    Lexem_code::Id,                70}, // 66: лог3...
        {const_cast<char32_t*>(U"4"),    Lexem_code::Id,                71}, // 67: лог6...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_log8,            0}, // 68: лог8
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_log16,           0}, // 69: лог16
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_log32,           0}, // 70: лог32
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_log64,           0}, // 71: лог64

        {const_cast<char32_t*>(U"ао"),   Lexem_code::Id,                73}, // 72: м...
        {const_cast<char32_t*>(U"лс"),   Lexem_code::Id,                75}, // 73: ма...
        {const_cast<char32_t*>(U"д"),    Lexem_code::Id,                77}, // 74: мо...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_malenkoe,        0}, // 75: мал
        {const_cast<char32_t*>(U"с"),    Lexem_code::Id,                78}, // 76: мас...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_modul,           0}, // 77: мод
        {const_cast<char32_t*>(U"и"),    Lexem_code::Id,                79}, // 78: масс...
        {const_cast<char32_t*>(U"в"),    Lexem_code::Id,                80}, // 79: масси...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_massiv,          0}, // 80: массив
		

        {const_cast<char32_t*>(U"еи"),   Lexem_code::Id,                82}, // 81: н...
        {const_cast<char32_t*>(U"п"),    Lexem_code::Id,                84}, // 82: не...
		{const_cast<char32_t*>(U"ч"),    Lexem_code::Id,                85}, // 83: ни...
		{const_cast<char32_t*>(U"р"),    Lexem_code::Id,                86}, // 84: неп...
		{const_cast<char32_t*>(U"е"),    Lexem_code::Id,                87}, // 85: нич...
		{const_cast<char32_t*>(U"а"),    Lexem_code::Id,                88}, // 86: непр...
		{const_cast<char32_t*>(U"г"),    Lexem_code::Id,                89}, // 87: ниче...
		{const_cast<char32_t*>(U"в"),    Lexem_code::Id,                90}, // 88: непра...
		{const_cast<char32_t*>(U"о"),    Lexem_code::Id,                91}, // 89: ничег...
		{const_cast<char32_t*>(U"д"),    Lexem_code::Id,                92}, // 90: неправ...
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_nichto,          0}, // 91: ничего
		{const_cast<char32_t*>(U"а"),    Lexem_code::Id,                93}, // 92: неправд...
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_lozh,            0}, // 93: неправда
        

        {const_cast<char32_t*>(U"ч"),    Lexem_code::Id,                95}, // 94: о...
        {const_cast<char32_t*>(U"и"),    Lexem_code::Id,                96}, // 95: оч...
        {const_cast<char32_t*>(U"щ"),    Lexem_code::Id,                97}, // 96: очи...
        {const_cast<char32_t*>(U"е"),    Lexem_code::Id,                98}, // 97: очищ...
        {const_cast<char32_t*>(U"н"),    Lexem_code::Id,                99}, // 98: очище...
        {const_cast<char32_t*>(U"и"),    Lexem_code::Id,               100}, // 99: очищен...
        {const_cast<char32_t*>(U"е"),    Lexem_code::Id,               101}, // 100: очищени...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_osvobozhdenie,   0}, // 101: очищение

        {const_cast<char32_t*>(U"еор"),  Lexem_code::Id,               103}, // 102: п...
        {const_cast<char32_t*>(U"р"),    Lexem_code::Id,               106}, // 103: пе...
        {const_cast<char32_t*>(U"вдкс"), Lexem_code::Id,               107}, // 104: по...
        {const_cast<char32_t*>(U"а"),    Lexem_code::Id,               111}, // 105: пр...
        {const_cast<char32_t*>(U"е"),    Lexem_code::Id,               112}, // 106: пер...
		{const_cast<char32_t*>(U"т"),    Lexem_code::Id,               113}, // 107: пов..
		{const_cast<char32_t*>(U"с"),    Lexem_code::Id,               114}, // 108: под...
        {const_cast<char32_t*>(U"ау"),   Lexem_code::Id,               115}, // 109: пок...
		{const_cast<char32_t*>(U"т"),    Lexem_code::Id,               117}, // 110: пос...
        {const_cast<char32_t*>(U"в"),    Lexem_code::Id,               118}, // 111: пра...
		{const_cast<char32_t*>(U"мч"),   Lexem_code::Id,               119}, // 112: пере...
		{const_cast<char32_t*>(U"о"),    Lexem_code::Id,               121}, // 113: повт...
	    {const_cast<char32_t*>(U"ч"),    Lexem_code::Id,               122}, // 114: подс...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_poka,            0}, // 115: пока      
        {const_cast<char32_t*>(U"д"),    Lexem_code::Id,               123}, // 116: поку...
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_konst,           0}, // 117: пост
		{const_cast<char32_t*>(U"д"),    Lexem_code::Id,               124}, // 118: переч...
		{const_cast<char32_t*>(U"е"),    Lexem_code::Id,               125}, // 119: перем...
		{const_cast<char32_t*>(U"и"),    Lexem_code::Id,               126}, // 120: переч...
		{const_cast<char32_t*>(U"р"),    Lexem_code::Id,               127}, // 121: повто...
		{const_cast<char32_t*>(U"р"),    Lexem_code::Id,               128}, // 122: подсч...
        {const_cast<char32_t*>(U"а"),    Lexem_code::Id,               129}, // 123: покуд...
        {const_cast<char32_t*>(U"а"),    Lexem_code::Id,               130}, // 124: правд...
        {const_cast<char32_t*>(U"н"),    Lexem_code::Id,               131}, // 125: переме...
        {const_cast<char32_t*>(U"с"),    Lexem_code::Id,               132}, // 126: перечи...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_povtoryaj,       0}, // 127: повтор
        {const_cast<char32_t*>(U"т"),    Lexem_code::Id,               165}, // 128: подсче...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_pokuda,          0}, // 129: покуда
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_istina,          0}, // 130: правда	
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_perem,           0}, // 131: перемен
        {const_cast<char32_t*>(U"л"),    Lexem_code::Id,               134}, // 132: перечис...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_perechis,        0}, // 133: подсчет
        {const_cast<char32_t*>(U"е"),    Lexem_code::Id,               135}, // 134: перечисл...
        {const_cast<char32_t*>(U"н"),    Lexem_code::Id,               136}, // 135: перечисле...
        {const_cast<char32_t*>(U"и"),    Lexem_code::Id,               137}, // 136: перечислен...
        {const_cast<char32_t*>(U"е"),    Lexem_code::Id,               138}, // 137: перечислени...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_perechislenie,   0}, // 138: перечисление

        {const_cast<char32_t*>(U"а"),    Lexem_code::Id,               140}, // 139: р...
        {const_cast<char32_t*>(U"зн"),   Lexem_code::Id,               141}, // 140: ра...
        {const_cast<char32_t*>(U"б"),    Lexem_code::Id,               143}, // 141: раз...
        {const_cast<char32_t*>(U"д"),    Lexem_code::Id,               144}, // 142: ран...		
        {const_cast<char32_t*>(U"о"),    Lexem_code::Id,               145}, // 143: разб...
        {const_cast<char32_t*>(U"о"),    Lexem_code::Id,               146}, // 144: ранд...		
        {const_cast<char32_t*>(U"р"),    Lexem_code::Id,               147}, // 145: разбо...
        {const_cast<char32_t*>(U"м"),    Lexem_code::Id,               148}, // 146: рандо...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_razbor,          0}, // 147: разбор
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_random,          0}, // 148: рандом

        {const_cast<char32_t*>(U"ист"),  Lexem_code::Id,               150}, // 149: с...
        {const_cast<char32_t*>(U"м"),    Lexem_code::Id,               153}, // 150: си...
        {const_cast<char32_t*>(U"ы"),    Lexem_code::Id,               154}, // 151: сс...
        {const_cast<char32_t*>(U"р"),    Lexem_code::Id,               155}, // 152: ст...
        {const_cast<char32_t*>(U"в"),    Lexem_code::Id,               156}, // 153: сим...
        {const_cast<char32_t*>(U"л"),    Lexem_code::Id,               157}, // 154: ссы...
        {const_cast<char32_t*>(U"оу"),   Lexem_code::Id,               158}, // 155: стр...
		{const_cast<char32_t*>(U"о"),    Lexem_code::Id,               160}, // 156: симв...
        {const_cast<char32_t*>(U"о"),    Lexem_code::Id,               161}, // 157: ссыл...
		{const_cast<char32_t*>(U"ч"),    Lexem_code::Id,               162}, // 158: стро...
		{const_cast<char32_t*>(U"к"),    Lexem_code::Id,               163}, // 159: стру...
		{const_cast<char32_t*>(U"л"),    Lexem_code::Id,               164}, // 160: симво...
		{const_cast<char32_t*>(U"ч"),    Lexem_code::Id,               165}, // 161: ссыло...
		{const_cast<char32_t*>(U"к"),    Lexem_code::Id,               166}, // 162: строч...
		{const_cast<char32_t*>(U"т"),    Lexem_code::Id,               167}, // 163: струк...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_simv,            0}, // 164: символ
		{const_cast<char32_t*>(U"к"),    Lexem_code::Id,               168}, // 165: ссылоч...
		{const_cast<char32_t*>(U"а"),    Lexem_code::Id,               193}, // 166: строчк...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_struktura,       0}, // 167: структ
		{const_cast<char32_t*>(U"а"),    Lexem_code::Id,               170}, // 168: ссылочк...
		{const_cast<char32_t*>(U""),     Lexem_code::Kw_stroka,          0}, // 169: строчка
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_ssylka,          0}, // 170: ссылочка



        {const_cast<char32_t*>(U"ио"),   Lexem_code::Id,               172}, // 171: т...
        {const_cast<char32_t*>(U"п"),    Lexem_code::Id,               174}, // 172: ти...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_to,              0}, // 173: то
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_tip,             0}, // 174: тип
		
		{const_cast<char32_t*>(U"д"),    Lexem_code::Id,               176}, // 175: у...
		{const_cast<char32_t*>(U"а"),    Lexem_code::Id,               177}, // 176: уд...
		{const_cast<char32_t*>(U"л"),    Lexem_code::Id,               178}, // 177: уда...
		{const_cast<char32_t*>(U"и"),    Lexem_code::Id,               179}, // 178: удал...
		{const_cast<char32_t*>(U""),    Lexem_code::Kw_delete,           0}, // 179: удали


        {const_cast<char32_t*>(U"у"),    Lexem_code::Id,               181}, // 180: ф...
        {const_cast<char32_t*>(U"н"),    Lexem_code::Id,               182}, // 181: фу...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_funktsiya,       0}, // 208: фун

        {const_cast<char32_t*>(U"е"),    Lexem_code::Id,               184}, // 183: ц...
        {const_cast<char32_t*>(U"л"),    Lexem_code::Id,               185}, // 184: це...
        {const_cast<char32_t*>(U"1368"), Lexem_code::Kw_tsel,          186}, // 185: цел...
        {const_cast<char32_t*>(U"26"),   Lexem_code::Id,               190}, // 186: цел1...
        {const_cast<char32_t*>(U"2"),    Lexem_code::Id,               192}, // 187: цел3...
        {const_cast<char32_t*>(U"4"),    Lexem_code::Id,               193}, // 188: цел6...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_tsel8,           0}, // 189: цел8
        {const_cast<char32_t*>(U"8"),    Lexem_code::Id,               194}, // 190: цел12...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_tsel16,          0}, // 191: цел16
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_tsel32,          0}, // 192: цел32
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_tsel64,          0}, // 193: цел64
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_tsel128,         0}, // 194: цел128

        {const_cast<char32_t*>(U"и"),    Lexem_code::Id,               196}, // 195: ч...
        {const_cast<char32_t*>(U"с"),    Lexem_code::Id,               197}, // 196: чи...
        {const_cast<char32_t*>(U"т"),    Lexem_code::Id,               198}, // 197: чис...
        {const_cast<char32_t*>(U"а"),    Lexem_code::Id,               199}, // 198: чист...
        {const_cast<char32_t*>(U"я"),    Lexem_code::Id,               200}, // 199: чиста...
        {const_cast<char32_t*>(U""),     Lexem_code::Kw_chistaya,        0}  // 200: чистая
		
		
		{const_cast<char32_t*>(U"а"),    Lexem_code::Id,               202}, // 201: ш...
		{const_cast<char32_t*>(U"п"),    Lexem_code::Id,               203}, // 202: ша...
		{const_cast<char32_t*>(U"к"),    Lexem_code::Id,               204}, // 203: шап...
		{const_cast<char32_t*>(U"а"),    Lexem_code::Id,               205}, // 204: шапк...
		{const_cast<char32_t*>(U""),    Lexem_code::Kw_golovnaya,        0}, // 205: шапка
		
		
		{const_cast<char32_t*>(U"C"),    Lexem_code::Id,               207}, // 206: I...
		{const_cast<char32_t*>(U"1368"), Lexem_code::Id,Kw_kompl,      208}, // 207: IC...
		{const_cast<char32_t*>(U"2"),    Lexem_code::Id,               212}, // 208: IC1...
		{const_cast<char32_t*>(U"2"),    Lexem_code::Id,               213}, // 209: IC3...
		{const_cast<char32_t*>(U"4"),    Lexem_code::Id,               214}, // 210: IC6...
		{const_cast<char32_t*>(U"0"),    Lexem_code::Id,               215}, // 211: IC8...
		{const_cast<char32_t*>(U"8"),    Lexem_code::Id,               216}, // 212: IC12...
		{const_cast<char32_t*>(U""),     Lexem_code::Id,Kw_kompl32,      0}, // 213: IC32
		{const_cast<char32_t*>(U""),     Lexem_code::Id,Kw_kompl64,      0}, // 214: IC64
		{const_cast<char32_t*>(U""),     Lexem_code::Id,Kw_kompl80,      0}, // 215: IC80
		{const_cast<char32_t*>(U""),     Lexem_code::Id,Kw_kompl128,     0}, // 216: IC128
		
		
		{const_cast<char32_t*>(U"1368"), Lexem_code::Id,Kw_veshch,     218}, // 217: R...
		{const_cast<char32_t*>(U"2"),    Lexem_code::Id,               222}, // 218: R1...
		{const_cast<char32_t*>(U"2"),    Lexem_code::Id,               223}, // 219: R3...
		{const_cast<char32_t*>(U"4"),    Lexem_code::Id,               224}, // 220: R6...
		{const_cast<char32_t*>(U"0"),    Lexem_code::Id,               225}, // 221: R8...
		{const_cast<char32_t*>(U"8"),    Lexem_code::Id,               226}, // 222: R12...
		{const_cast<char32_t*>(U""),     Lexem_code::Id,Kw_veshch32,      0}, // 223: R32
		{const_cast<char32_t*>(U""),     Lexem_code::Id,Kw_veshch64,      0}, // 224: R64
		{const_cast<char32_t*>(U""),     Lexem_code::Id,Kw_veshch80,      0}, // 225: R80
		{const_cast<char32_t*>(U""),     Lexem_code::Id,Kw_veshch128,     0}, // 226: R128
		
		
		{const_cast<char32_t*>(U"аi"),   Lexem_code::Id,               228}, // 227: m...
		{const_cast<char32_t*>(U"x"),    Lexem_code::Id,               230}, // 228: ma...
		{const_cast<char32_t*>(U"n"),    Lexem_code::Id,               231}, // 229: mi...
		{const_cast<char32_t*>(U""),     Lexem_code::Id,Kw_max,          0}, // 230: max
		{const_cast<char32_t*>(U""),     Lexem_code::Id,Kw_min,          0}, // 231: min
		
    };
};