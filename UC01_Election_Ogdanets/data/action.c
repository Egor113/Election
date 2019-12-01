Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("__utmz=252441553.1574611162.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=www.vybory.izbirkom.ru");

	web_add_cookie("__utma=252441553.1240078081.1574611162.1574611162.1575202796.2; DOMAIN=www.vybory.izbirkom.ru");

	web_add_cookie("__utmb=252441553.4.10.1575202796; DOMAIN=www.vybory.izbirkom.ru");

	web_add_cookie("__utmt=1; DOMAIN=www.vybory.izbirkom.ru");

	web_add_cookie("__utmb=252441553.5.10.1575202796; DOMAIN=www.vybory.izbirkom.ru");

	web_add_cookie("__utmc=252441553; DOMAIN=www.vybory.izbirkom.ru");

	web_url("www.vybory.izbirkom.ru", 
		"URL=http://www.vybory.izbirkom.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/cal/core.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/styles/main.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/css/cal/theme.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/css/cal/sumoselect.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/css/cal/cal.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/css/cal/datepicker.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/header/00/fonts/PTS75F_W.eot?", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=https://www.google-analytics.com/ga.js", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=5&utmn=1201864127&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1903x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=2073637711&utmr=-"
		"&utmp=%2Fregion%2Fizbirkom&utmht=1575202998577&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1574611162.1575202796.2%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("UC01_TR01_Choose_date");

	web_add_cookie("SRCHUID=V=2&GUID=E69679589E024605A804D4AACFEFF080&dmnchg=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MC1=GUID=cdf3d14eec51462f98b057770b8b2c3c&HASH=cdf3&LV=201908&V=4&LU=1566572366489; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20190515; DOMAIN=iecvlist.microsoft.com");

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_submit_data("izbirkom", 
		"Action=http://www.vybory.izbirkom.ru/region/izbirkom", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=start_date", "Value=18.03.2018", ENDITEM, 
		"Name=urovproved", "Value=all", ENDITEM, 
		"Name=vidvibref", "Value=all", ENDITEM, 
		"Name=vibtype", "Value=all", ENDITEM, 
		"Name=end_date", "Value=18.03.2018", ENDITEM, 
		"Name=sxemavib", "Value=all", ENDITEM, 
		"Name=action", "Value=search_by_calendar", ENDITEM, 
		"Name=region", "Value=0", ENDITEM, 
		"Name=ok", "Value=Искать", ENDITEM, 
		EXTRARES, 
		"Url=../css/cal/core.css", ENDITEM, 
		"Url=../styles/main.css", ENDITEM, 
		"Url=../css/cal/sumoselect.css", ENDITEM, 
		"Url=../css/cal/theme.css", ENDITEM, 
		"Url=../css/cal/cal.css", ENDITEM, 
		"Url=../css/cal/datepicker.css", ENDITEM, 
		"Url=../header/00/fonts/PTS75F_W.eot", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=6&utmn=1972139193&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1903x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=341776034&utmr=0&"
		"utmp=%2Fregion%2Fizbirkom&utmht=1575203050077&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1574611162.1575202796.2%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", ENDITEM, 
		LAST);

	web_add_cookie("__utmb=252441553.6.10.1575202796; DOMAIN=www.vybory.izbirkom.ru");

	lr_end_transaction("UC01_TR01_Choose_date",LR_AUTO);

	lr_think_time(39);

	lr_start_transaction("UC01_TR02_President_election");

	web_url("Выборы Президента Российской Федерации", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=1&vrn=100100084849062&region=0&prver=0&pronetvd=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../header/00/fonts/PTS75F_W.eot", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=1&vrn=100100084849062&region=0&prver=0&pronetvd=null", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=7&utmn=1065824253&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1920x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=286712495&utmr=0&"
		"utmp=%2Fregion%2Fizbirkom%3Faction%3Dshow%26global%3D1%26vrn%3D100100084849062%26region%3D0%26prver%3D0%26pronetvd%3Dnull&utmht=1575203090521&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1574611162.1575202796.2%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=1&vrn=100100084849062&region=0&prver=0&pronetvd=null", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR02_President_election",LR_AUTO);

	lr_start_transaction("UC01_TR03_Region");

	web_add_cookie("__utmb=252441553.7.10.1575202796; DOMAIN=www.vybory.izbirkom.ru");

	lr_think_time(62);

	web_url("izbirkom_2", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=1000001&tvd=100100084849067&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=100100084849067", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=1&vrn=100100084849062&region=0&prver=0&pronetvd=null", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../header/00/fonts/PTS75F_W.eot", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=1000001&tvd=100100084849067&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=100100084849067", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=8&utmn=1036077311&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1920x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=1360077152&utmr=0"
		"&utmp=%2Fregion%2Fizbirkom%3Faction%3Dshow%26global%3Dtrue%26root%3D1000001%26tvd%3D100100084849067%26vrn%3D100100084849062%26prver%3D0%26pronetvd%3Dnull%26region%3D0%26sub_region%3D0%26type%3D0%26vibid%3D100100084849067&utmht=1575203161959&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1574611162.1575202796.2%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://"
		"www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=1000001&tvd=100100084849067&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=100100084849067", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR03_Region",LR_AUTO);

	lr_start_transaction("UC01_TR04_Subregion");

	web_add_cookie("__utmb=252441553.8.10.1575202796; DOMAIN=www.vybory.izbirkom.ru");

	lr_think_time(18);

	web_url("izbirkom_3", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=2012000364371", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=1000001&tvd=100100084849067&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=100100084849067", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=9&utmn=2028548954&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1920x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=432739887&utmr=0&"
		"utmp=%2Fregion%2Fizbirkom%3Faction%3Dshow%26global%3Dtrue%26root%3D12000009%26tvd%3D2012000364371%26vrn%3D100100084849062%26prver%3D0%26pronetvd%3Dnull%26region%3D0%26sub_region%3D0%26type%3D0%26vibid%3D2012000364371&utmht=1575203194606&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1574611162.1575202796.2%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://"
		"www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=2012000364371", ENDITEM, 
		"Url=../header/00/fonts/PTS75F_W.eot", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=2012000364371", ENDITEM, 
		LAST);

	web_add_cookie("__utmb=252441553.9.10.1575202796; DOMAIN=www.vybory.izbirkom.ru");

	lr_end_transaction("UC01_TR04_Subregion",LR_AUTO);

	lr_think_time(31);

	lr_start_transaction("UC01_TR05_Region_website");

	web_url("сайт избирательной комиссии субъекта Российской Федерации", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid=2012000364371", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=2012000364371", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=10&utmn=1124349872&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1920x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=647887631&utmr=0"
		"&utmp=%2Fregion%2Fizbirkom%3Faction%3Dshow%26global%3Dtrue%26root%3D12000009%26tvd%3D2012000364371%26vrn%3D100100084849062%26prver%3D0%26pronetvd%3Dnull%26region%3D1%26sub_region%3D1%26type%3D0%26vibid%3D2012000364371&utmht=1575203234699&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1574611162.1575202796.2%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://"
		"www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid=2012000364371", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR05_Region_website",LR_AUTO);

	lr_start_transaction("UC01_TR06_Choose_UIK");

	web_add_cookie("__utmz=252441553.1574611162.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=www.adygei.vybory.izbirkom.ru");

	web_add_cookie("__utma=252441553.1240078081.1574611162.1574611162.1575202796.2; DOMAIN=www.adygei.vybory.izbirkom.ru");

	web_add_cookie("__utmb=252441553.10.10.1575202796; DOMAIN=www.adygei.vybory.izbirkom.ru");

	web_add_cookie("__utmt=1; DOMAIN=www.adygei.vybory.izbirkom.ru");

	web_add_cookie("__utmc=252441553; DOMAIN=www.adygei.vybory.izbirkom.ru");

	web_add_cookie("__utmb=252441553.11.10.1575202796; DOMAIN=www.adygei.vybory.izbirkom.ru");

	lr_think_time(86);

	web_url("adygei", 
		"URL=http://www.adygei.vybory.izbirkom.ru/region/adygei?action=show&global=true&root=14001001&tvd=4014001115032&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid=4014001115032", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid=2012000364371", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", "Referer=", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=11&utmn=1358768351&utmhn=www.adygei.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1920x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=68524321&"
		"utmr=http%3A%2F%2Fwww.vybory.izbirkom.ru%2Fregion%2Fizbirkom%3Faction%3Dshow%26global%3Dtrue%26root%3D12000009%26tvd%3D2012000364371%26vrn%3D100100084849062%26prver%3D0%26pronetvd%3Dnull%26region%3D1%26sub_region%3D1%26type%3D0%26vibid%3D2012000364371&utmp=%2Fregion%2Fadygei%3Faction%3Dshow%26global%3Dtrue%26root%3D14001001%26tvd%3D4014001115032%26vrn%3D100100084849062%26prver%3D0%26pronetvd%3Dnull%26region%3D1%26sub_region%3D1%26type%3D0%26vibid%3D4014001115032&utmht=1575203321884&utmac="
		"UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1574611162.1575202796.2%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://www.adygei.vybory.izbirkom.ru/region/adygei?action=show&global=true&root=14001001&tvd=4014001115032&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid=4014001115032", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR06_Choose_UIK",LR_AUTO);

	lr_start_transaction("UC01_TR07_UIK_Results");

	web_add_cookie("__utmb=252441553.12.10.1575202796; DOMAIN=www.adygei.vybory.izbirkom.ru");

	lr_think_time(38);

	web_url("Итоги голосовани", 
		"URL=http://www.adygei.vybory.izbirkom.ru/region/region/adygei?action=show&root=14001001&tvd=4014001115032&vrn=100100084849062&region=1&global=true&sub_region=1&prver=0&pronetvd=null&vibid=4014001115032&type=226", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.adygei.vybory.izbirkom.ru/region/adygei?action=show&global=true&root=14001001&tvd=4014001115032&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid=4014001115032", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=12&utmn=1449542534&utmhn=www.adygei.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1920x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid="
		"2007001748&utmr=0&utmp=%2Fregion%2Fregion%2Fadygei%3Faction%3Dshow%26root%3D14001001%26tvd%3D4014001115032%26vrn%3D100100084849062%26region%3D1%26global%3Dtrue%26sub_region%3D1%26prver%3D0%26pronetvd%3Dnull%26vibid%3D4014001115032%26type%3D226&utmht=1575203361570&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1574611162.1575202796.2%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://"
		"www.adygei.vybory.izbirkom.ru/region/region/adygei?action=show&root=14001001&tvd=4014001115032&vrn=100100084849062&region=1&global=true&sub_region=1&prver=0&pronetvd=null&vibid=4014001115032&type=226", ENDITEM, 
		"Url=/servlet/ExcelReportVersion?region=1&sub_region=1&root=14001001&global=true&vrn=100100084849062&tvd=4014001115032&type=226&vibid=4014001115032&condition=&action=show&version=null&prver=0&sortorder=0", "Referer=http://www.adygei.vybory.izbirkom.ru/region/region/adygei?action=show&root=14001001&tvd=4014001115032&vrn=100100084849062&region=1&global=true&sub_region=1&prver=0&pronetvd=null&vibid=4014001115032&type=226", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR07_UIK_Results",LR_AUTO);

	lr_start_transaction("UC01_TR08_Download_results");

	lr_end_transaction("UC01_TR08_Download_results",LR_AUTO);

	return 0;
}