/* 
** @(#)domains.h	1.14 12/11/98 - Kent Landfield
*/

/*
** Domain Address COUNTRY Abbreviations 
** Domain codes 
**
** Thanks to Olivier Crepin-Leblond <ocl@gih.com> for the basis of
** this file.  For more timely information, check out 
**
**    http://www.nsrc.org/codes/country-codes.html
**    http://www.faqs.org/faqs/mail/country-codes/
**
*/
struct co_code {
    char *domain;
    char *country;
};

struct co_code domain_codes[] = {
    {"ARPA", "Arpanet"},
    {"COM", "Commercial Entity"},
    {"EDU", "Educational Institution"},
    {"GOV", "Government Office"},
    {"INT", "International Organization"},
    {"MIL", "US Military"},
    {"NET", "Network Service Provider"},
    {"ORG", "Organizations"},
    {"BITNET", "Educational BitNet"},
    {"AC", "Ascension Island"},
    {"AD", "Andorra"},
    {"AE", "United Arab Emirates"},
    {"AF", "Afghanistan"},
    {"AG", "Antigua and Barbuda"},
    {"AI", "Anguilla"},
    {"AL", "Albania"},
    {"AM", "Armenia"},
    {"AN", "Netherlands Antilles"},
    {"AO", "Republic of Angola"},
    {"AQ", "Antarctica"},
    {"AR", "Argentina"},
    {"AS", "American Samoa"},
    {"AT", "Austria"},
    {"AU", "Australia"},
    {"AW", "Aruba"},
    {"AZ", "Azerbaijan"},
    {"BA", "Bosnia-Herzegovina"},
    {"BB", "Barbados"},
    {"BD", "Bangladesh"},
    {"BE", "Belgium"},
    {"BF", "Burkina Faso"},
    {"BG", "Bulgaria"},
    {"BH", "Bahrain"},
    {"BI", "Burundi"},
    {"BJ", "Benin"},
    {"BM", "Bermuda"},
    {"BN", "Brunei Darussalam"},
    {"BO", "Bolivia"},
    {"BR", "Brazil"},
    {"BS", "Bahamas"},
    {"BT", "Bhutan"},
    {"BV", "Bouvet Island"},
    {"BW", "Botswana"},
    {"BY", "Belarus"},
    {"BZ", "Belize"},
    {"CA", "Canada"},
    {"CC", "Cocos (Keeling Islands)"},
    {"CD", "Rep. Dem. Congo"},
    {"CF", "Central African Republic"},
    {"CG", "Congo"},
    {"CH", "Switzerland"},
    {"CI", "Cote D'Ivoire (Ivory Coast)"},
    {"CK", "Cook Islands"},
    {"CL", "Chile"},
    {"CM", "Cameroon"},
    {"CN", "China"},
    {"CO", "Colombia"},
    {"CR", "Costa Rica"},
    {"CU", "Cuba"},
    {"CV", "Cape Verde"},
    {"CX", "Christmas Island"},
    {"CY", "Cyprus"},
    {"CZ", "Czech Republic"},
    {"DE", "Germany"},
    {"DJ", "Djibouti"},
    {"DK", "Denmark"},
    {"DM", "Dominica"},
    {"DO", "Dominican Republic"},
    {"DZ", "Algeria"},
    {"EC", "Ecuador"},
    {"EE", "Estonia"},
    {"EG", "Egypt"},
    {"EH", "Western Sahara"},
    {"ER", "Eritrea"},
    {"ES", "Spain"},
    {"ET", "Ethiopia"},
    {"FI", "Finland"},
    {"FJ", "Fiji"},
    {"FK", "Falkland Islands(Malvinas)"},
    {"FM", "Micronesia"},
    {"FO", "Faroe Islands"},
    {"FR", "France"},
    {"FX", "France (European Ter.)"},
    {"GA", "Gabon"},
    {"GB", "Great Britian"},
    {"GD", "Grenada"},
    {"GE", "Georgia"},
    {"GF", "French Guiana"},
    {"GG", "Guernsey"},
    {"GH", "Ghana"},
    {"GI", "Gibraltar"},
    {"GL", "Greenland"},
    {"GM", "Gambia"},
    {"GN", "Guinea"},
    {"GP", "Guadeloupe (Fr.)"},
    {"GQ", "Equatorial Guinea"},
    {"GR", "Greece"},
    {"GS", "S.Georgia & S.Sandwich Isls."},
    {"GT", "Guatemala"},
    {"GU", "Guam (US)"},
    {"GW", "Guinea Bissau"},
    {"GY", "Guyana"},
    {"HK", "Hong Kong"},
    {"HM", "Heard and McDonald Islands"},
    {"HN", "Honduras"},
    {"HR", "Croatia"},
    {"HT", "Haiti"},
    {"HU", "Hungary"},
    {"ID", "Indonesia"},
    {"IE", "Ireland"},
    {"IL", "Israel"},
    {"IM", "Isle of Man"},
    {"IN", "India"},
    {"IO", "British Indian Ocean Ter."},
    {"IQ", "Iraq"},
    {"IR", "Iran"},
    {"IS", "Iceland"},
    {"IT", "Italy"},
    {"JE", "Jersey (Ch. Isl.)"},
    {"JM", "Jamaica"},
    {"JO", "Jordan"},
    {"JP", "Japan"},
    {"KE", "Kenya"},
    {"KG", "Kyrgyz Republic"},
    {"KH", "Cambodia"},
    {"KI", "Kiribati"},
    {"KM", "Comoros"},
    {"KN", "Saint Kitts Nevis Ang."},
    {"KP", "Korea (North)"},
    {"KR", "Korea (South)"},
    {"KW", "Kuwait"},
    {"KY", "Cayman Islands"},
    {"KZ", "Kazakhstan"},
    {"LA", "Laos"},
    {"LB", "Lebanon"},
    {"LC", "Saint Lucia"},
    {"LI", "Liechtenstein"},
    {"LK", "Sri Lanka"},
    {"LR", "Liberia"},
    {"LS", "Lesotho"},
    {"LT", "Lithuania"},
    {"LU", "Luxembourg"},
    {"LV", "Latvia"},
    {"LY", "Libya"},
    {"MA", "Morocco"},
    {"MC", "Monaco"},
    {"MD", "Moldova"},
    {"MG", "Madagascar"},
    {"MH", "Marshall Islands"},
    {"MK", "Macedonia"},
    {"ML", "Mali"},
    {"MM", "Myanmar"},
    {"MN", "Mongolia"},
    {"MO", "Macau"},
    {"MP", "Northern Mariana Islands"},
    {"MQ", "Martinique (Fr.)"},
    {"MR", "Mauritania"},
    {"MS", "Montserrat"},
    {"MT", "Malta"},
    {"MU", "Mauritius"},
    {"MV", "Maldives"},
    {"MW", "Malawi"},
    {"MX", "Mexico"},
    {"MY", "Malaysia"},
    {"MZ", "Mozambique"},
    {"NA", "Namibia"},
    {"NC", "New Caledonia (Fr.)"},
    {"NE", "Niger"},
    {"NF", "Norfolk Island"},
    {"NG", "Nigeria"},
    {"NI", "Nicaragua"},
    {"NL", "Netherlands"},
    {"NO", "Norway"},
    {"NP", "Nepal"},
    {"NR", "Nauru"},
    {"NU", "Niue"},
    {"NZ", "New Zealand"},
    {"OM", "Oman"},
    {"PA", "Panama"},
    {"PE", "Peru"},
    {"PF", "Polynesia (Fr.)"},
    {"PG", "Papua New Guinea"},
    {"PH", "Philippines"},
    {"PK", "Pakistan"},
    {"PL", "Poland"},
    {"PM", "St. Pierre and Miquelon"},
    {"PN", "Pitcairn"},
    {"PR", "Puerto Rico"},
    {"PT", "Portugal"},
    {"PW", "Palau"},
    {"PY", "Paraguay"},
    {"QA", "Qatar"},
    {"RE", "Reunion (Fr.)"},
    {"RO", "Romania"},
    {"RU", "Russian Federation"},
    {"RW", "Rwanda"},
    {"SA", "Saudi Arabia"},
    {"SB", "Solomon Islands"},
    {"SC", "Seychelles"},
    {"SD", "Sudan"},
    {"SE", "Sweden"},
    {"SG", "Singapore"},
    {"SH", "St. Helena"},
    {"SI", "Slovenia"},
    {"SJ", "Svalbard and Jan Mayen Isls."},
    {"SK", "Slovakia (Slovak Republic)"},
    {"SL", "Sierra Leone"},
    {"SM", "San Marino"},
    {"SN", "Senegal"},
    {"SO", "Somalia"},
    {"SR", "Suriname"},
    {"ST", "Sao Tome and Principe"},
    {"SU", "Soviet Union"},
    {"SV", "El Salvador"},
    {"SY", "Syria"},
    {"SZ", "Swaziland"},
    {"TC", "Turks and Caicos Islands"},
    {"TD", "Chad"},
    {"TF", "French Southern Ter."},
    {"TG", "Togo"},
    {"TH", "Thailand"},
    {"TJ", "Tajikistan"},
    {"TK", "Tokelau"},
    {"TM", "Turkmenistan"},
    {"TN", "Tunisia"},
    {"TO", "Tonga"},
    {"TP", "East Timor"},
    {"TR", "Turkey"},
    {"TT", "Trinidad and Tobago"},
    {"TV", "Tuvalu"},
    {"TW", "Taiwan"},
    {"TZ", "Tanzania"},
    {"UA", "Ukraine"},
    {"UG", "Uganda"},
    {"UK", "United Kingdom"},
    {"UM", "US Minor Outlying Islands"},
    {"US", "United States"},
    {"UY", "Uruguay"},
    {"UZ", "Uzbekistan"},
    {"VA", "Vatican City State (Holy See)"},
    {"VC", "Saint Vincent & The Grenadines"},
    {"VE", "Venezuela"},
    {"VG", "Virgin Islands (British)"},
    {"VI", "Virgin Islands (US)"},
    {"VN", "Viet Nam"},
    {"VU", "Vanuatu"},
    {"WF", "Wallis and Futuna Islands"},
    {"WS", "Samoa"},
    {"YE", "Yemen"},
    {"YT", "Mayotte"},
    {"YU", "Yugoslavia"},
    {"ZA", "South Africa"},
    {"ZM", "Zambia"},
    {"ZR", "Democratic Republic of Congo"},
    {"ZW", "Zimbabwe"},
    {NULL, NULL},
};

#define num_root_domains (sizeof (domain_codes) / sizeof (struct co_code))

#define MIN_DOMAIN_LEN 2
