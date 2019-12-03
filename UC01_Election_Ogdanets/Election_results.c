int uik_index;
int candidate_index;
int arr1[6];
int arr1[6];
int arr2[6];
int arr3[6];
int arr4[6];
int arr5[6];
int arr6[6];
int arr7[6];


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
		LAST);

	lr_end_transaction("UC01_TR05_Subregion",LR_AUTO);

	lr_think_time(28);

	lr_start_transaction("UC01_TR06_UIKs");

	web_reg_save_param_regexp("ParamName=Results",
        "RegExp=<td align=\"right\" style=\"color:black\"><nobr><b>([0-9]+)</b></nobr>\r\n<br>[0-9.]+%",
        "Ordinal=All",
        "Group=1",
        LAST);
	
	web_url("сайт избирательной комиссии субъекта Российской Федерации", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=227&vibid=2012000364371", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/region/izbirkom?action=show&tvd=100100084849067&vrn=100100084849062&region=0&global=1&sub_region=0&prver=0&pronetvd=null&vibid=2012000364371&type=227", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
	
	

	lr_end_transaction("UC01_TR06_UIKs",LR_AUTO);

	return 0;
}