int i;

Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("www.vybory.izbirkom.ru", 
		"URL=http://www.vybory.izbirkom.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("UC01_TR01_Choose_date");

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
		LAST);

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
		LAST);

	lr_end_transaction("UC01_TR02_President_election",LR_AUTO);

	lr_start_transaction("UC01_TR03_Region");

	lr_think_time(62);

	web_url("izbirkom_2", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=1000001&tvd=100100084849067&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=100100084849067", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=1&vrn=100100084849062&region=0&prver=0&pronetvd=null", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC01_TR03_Region",LR_AUTO);

	lr_start_transaction("UC01_TR04_Subregion");

	lr_think_time(18);

	web_url("izbirkom_3", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=2012000364371", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=1000001&tvd=100100084849067&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=100100084849067", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC01_TR04_Subregion",LR_AUTO);

	lr_think_time(31);

	lr_start_transaction("UC01_TR05_Region_website");

	web_reg_save_param("UIK_IDs",
                 "LB=type=0&amp;vibid=",
                 "RB=\">",
				 "Ord=All",
				 LAST);
	
	web_url("сайт избирательной комиссии субъекта Российской Федерации", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid=2012000364371", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid=2012000364371", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

//		for (i=1;i<=atoi(lr_eval_string("{c_flightids_count}"));i++)
//	 {
//		 lr_param_sprintf("c_buffer", "%sflightID=%s&",
//		   lr_eval_string("{c_buffer}"),
//		   lr_paramarr_idx("c_flightids",
//		   i));		
//	}
	
			
	
	
	lr_end_transaction("UC01_TR05_Region_website",LR_AUTO);
	
	for (i=6;i<=atoi(lr_eval_string("{UIK_IDs_count}"));i++) {
		
		lr_save_string(lr_paramarr_idx("UIK_IDs", i), "UIK_ID");
		
		lr_start_transaction("UC01_TR06_Choose_UIK");

		lr_think_time(86);
	
		web_url("adygei", 
			"URL=http://www.adygei.vybory.izbirkom.ru/region/adygei?action=show&global=true&root=14001001&tvd={UIK_ID}&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid={UIK_ID}", 
			"TargetFrame=", 
			"Resource=0", 
			"RecContentType=text/html", 
			"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd=2012000364371&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid=2012000364371", 
			"Snapshot=t8.inf", 
			"Mode=HTML", 
			LAST);
	
		lr_end_transaction("UC01_TR06_Choose_UIK",LR_AUTO);
	
		lr_start_transaction("UC01_TR07_UIK_Results");
	
		lr_think_time(38);
	
		web_url("Итоги голосовани", 
			"URL=http://www.adygei.vybory.izbirkom.ru/region/region/adygei?action=show&root=14001001&tvd={UIK_ID}&vrn=100100084849062&region=1&global=true&sub_region=1&prver=0&pronetvd=null&vibid={UIK_ID}&type=226", 
			"TargetFrame=", 
			"Resource=0", 
			"RecContentType=text/html", 
			"Referer=http://www.adygei.vybory.izbirkom.ru/region/adygei?action=show&global=true&root=14001001&tvd={UIK_ID}&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid={UIK_ID}", 
			"Snapshot=t9.inf", 
			"Mode=HTML", 
			LAST);
	
		lr_end_transaction("UC01_TR07_UIK_Results",LR_AUTO);
	
		lr_start_transaction("UC01_TR08_Download_results");
	
		lr_end_transaction("UC01_TR08_Download_results",LR_AUTO);
		
	}

	

	return 0;
}