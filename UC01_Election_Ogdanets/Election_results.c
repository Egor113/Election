Election_results()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("www.vybory.izbirkom.ru", 
		"URL=http://www.vybory.izbirkom.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/cal/theme.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/css/cal/core.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/styles/main.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/css/cal/cal.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/css/cal/sumoselect.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/css/cal/datepicker.css", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/header/00/fonts/PTS75F_W.eot?", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=https://www.google-analytics.com/ga.js", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=2&utmn=91354660&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1903x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=1029199464&utmr=-&"
		"utmp=%2Fregion%2Fizbirkom&utmht=1575308504920&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1575202796.1575308432.3%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=https://c.urs.microsoft.com/l1.dat?cw=637108000838418177&v=3&cv=9.11.18362.0&os=10.0.18362.0.0&pg=4A72F430-B40C-4D36-A068-CE33ADA5ADF9", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("UC01_TR01_Choose_date");

	web_submit_data("izbirkom", 
		"Action=http://www.vybory.izbirkom.ru/region/izbirkom", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom", 
		"Snapshot=t11.inf", 
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
		"Url=../styles/main.css", ENDITEM, 
		"Url=../css/cal/core.css", ENDITEM, 
		"Url=../css/cal/theme.css", ENDITEM, 
		"Url=../css/cal/sumoselect.css", ENDITEM, 
		"Url=../header/00/fonts/PTS75F_W.eot", ENDITEM, 
		"Url=../css/cal/cal.css", ENDITEM, 
		"Url=../css/cal/datepicker.css", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=3&utmn=1419762300&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1903x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=1255510816&utmr=0"
		"&utmp=%2Fregion%2Fizbirkom&utmht=1575308552413&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1575202796.1575308432.3%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR01_Choose_date",LR_AUTO);

	lr_think_time(36);

	lr_start_transaction("UC01_TR02_President_election");

	web_url("Выборы Президента Российской Федерации", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=1&vrn=100100084849062&region=0&prver=0&pronetvd=null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../header/00/fonts/PTS75F_W.eot", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=1&vrn=100100084849062&region=0&prver=0&pronetvd=null", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=4&utmn=631845050&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1920x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=1646655522&utmr=0&"
		"utmp=%2Fregion%2Fizbirkom%3Faction%3Dshow%26global%3D1%26vrn%3D100100084849062%26region%3D0%26prver%3D0%26pronetvd%3Dnull&utmht=1575308589857&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1575202796.1575308432.3%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=1&vrn=100100084849062&region=0&prver=0&pronetvd=null", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR02_President_election",LR_AUTO);

	lr_think_time(31);

	lr_start_transaction("UC01_TR03_Regions");

	web_url("Сводна таблица результатов выборов", 
		"URL=http://www.vybory.izbirkom.ru/region/region/izbirkom?action=show&root=1&tvd=100100084849066&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=100100084849066&type=227", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=1&vrn=100100084849062&region=0&prver=0&pronetvd=null", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/header/00/fonts/PTS75F_W.eot?", "Referer=http://www.vybory.izbirkom.ru/region/region/izbirkom?action=show&root=1&tvd=100100084849066&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=100100084849066&type=227", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=5&utmn=1852374015&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1903x915&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=1826253462&utmr=0"
		"&utmp=%2Fregion%2Fregion%2Fizbirkom%3Faction%3Dshow%26root%3D1%26tvd%3D100100084849066%26vrn%3D100100084849062%26region%3D0%26global%3D1%26sub_region%3D0%26prver%3D0%26pronetvd%3Dnull%26vibid%3D100100084849066%26type%3D227&utmht=1575308623422&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1575202796.1575308432.3%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://"
		"www.vybory.izbirkom.ru/region/region/izbirkom?action=show&root=1&tvd=100100084849066&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=100100084849066&type=227", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR03_Regions",LR_AUTO);

	lr_think_time(24);

	lr_start_transaction("UC01_TR04_Region");

	web_url("Республика Адыге (Адыге)", 
		"URL=http://www.vybory.izbirkom.ru/region/region/izbirkom?action=show&tvd=100100084849066&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=100100084849067&type=227", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/region/izbirkom?action=show&root=1&tvd=100100084849066&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=100100084849066&type=227", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/header/00/fonts/PTS75F_W.eot?", "Referer=http://www.vybory.izbirkom.ru/region/region/izbirkom?action=show&tvd=100100084849066&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=100100084849067&type=227", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=6&utmn=219561831&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1920x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=738157601&utmr=0&"
		"utmp=%2Fregion%2Fregion%2Fizbirkom%3Faction%3Dshow%26tvd%3D100100084849066%26vrn%3D100100084849062%26region%3D0%26global%3D1%26sub_region%3D0%26prver%3D0%26pronetvd%3Dnull%26vibid%3D100100084849067%26type%3D227&utmht=1575308648784&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1575202796.1575308432.3%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://www.vybory.izbirkom.ru/"
		"region/region/izbirkom?action=show&tvd=100100084849066&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=100100084849067&type=227", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR04_Region",LR_AUTO);

	lr_think_time(25);

	lr_start_transaction("UC01_TR05_Subregion");

	web_url("Адыгейска", 
		"URL=http://www.vybory.izbirkom.ru/region/region/izbirkom?action=show&tvd=100100084849067&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=2012000364371&type=227", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/region/izbirkom?action=show&tvd=100100084849066&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=100100084849067&type=227", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/header/00/fonts/PTS75F_W.eot?", "Referer=http://www.vybory.izbirkom.ru/region/region/izbirkom?action=show&tvd=100100084849067&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=2012000364371&type=227", ENDITEM, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=7&utmn=1631633641&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1920x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=495571807&utmr=0&"
		"utmp=%2Fregion%2Fregion%2Fizbirkom%3Faction%3Dshow%26tvd%3D100100084849067%26vrn%3D100100084849062%26region%3D0%26global%3D1%26sub_region%3D0%26prver%3D0%26pronetvd%3Dnull%26vibid%3D2012000364371%26type%3D227&utmht=1575308678582&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1575202796.1575308432.3%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://www.vybory.izbirkom.ru/"
		"region/region/izbirkom?action=show&tvd=100100084849067&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=2012000364371&type=227", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR05_Subregion",LR_AUTO);

	lr_think_time(28);

	lr_start_transaction("UC01_TR06_UIKs");

	web_url("сайт избирательной комиссии субъекта Российской Федерации", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=227&vibid=2012000364371", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/region/izbirkom?action=show&tvd=100100084849067&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=2012000364371&type=227", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=5.7.2&utms=8&utmn=1508508112&utmhn=www.vybory.izbirkom.ru&utmcs=windows-1251&utmsr=1920x1080&utmvp=1920x932&utmsc=24-bit&utmul=ru-ru&utmje=1&utmfl=32.0%20r0&utmdt=%D0%A1%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D1%8F%20%D0%BE%20%D0%BF%D1%80%D0%BE%D0%B2%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D1%85%D1%81%D1%8F%20%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%B0%D1%85%20%D0%B8%20%D1%80%D0%B5%D1%84%D0%B5%D1%80%D0%B5%D0%BD%D0%B4%D1%83%D0%BC%D0%B0%D1%85&utmhid=372469400&utmr=0&"
		"utmp=%2Fregion%2Fizbirkom%3Faction%3Dshow%26global%3Dtrue%26root%3D12000009%26tvd%3D2012000364371%26vrn%3D100100084849062%26prver%3D0%26pronetvd%3Dnull%26region%3D1%26sub_region%3D1%26type%3D227%26vibid%3D2012000364371&utmht=1575308713716&utmac=UA-26136728-1&utmcc=__utma%3D252441553.1240078081.1574611162.1575202796.1575308432.3%3B%2B__utmz%3D252441553.1574611162.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)%3B&utmjid=&utmu=qhAAAAAAAAAAAAAAAAAAAAAE~", "Referer=http://"
		"www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=227&vibid=2012000364371", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR06_UIKs",LR_AUTO);

	return 0;
}