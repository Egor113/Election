int uik_index;
int subregion_index;
char FileLocation[1024] = "..\\election_results.txt";
long FileVarriable;  

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

	web_reg_save_param("Region_ID",
                 "LB=type=0&amp;vibid=",
                 "RB=\">",
				 //"Ord=All",
				 LAST);
	
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

	web_reg_save_param("Subregion_IDs",
                 "LB=type=0&amp;vibid=",
                 "RB=\">",
				 "Ord=All",
				 LAST);
		
	web_url("izbirkom_2", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=1000001&tvd={Region_ID}&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid={Region_ID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=1&vrn=100100084849062&region=0&prver=0&pronetvd=null", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC01_TR03_Region",LR_AUTO);
	
	for (subregion_index=1; subregion_index <= atoi(lr_eval_string("{Subregion_IDs_count}")); subregion_index++) {
		
	lr_save_string(lr_paramarr_idx("Subregion_IDs", subregion_index), "Subregion_ID");
		
	lr_start_transaction("UC01_TR04_Subregion");

	lr_think_time(18);

	web_url("izbirkom_3", 
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd={Subregion_ID}&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid={Subregion_ID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=1000001&tvd={Region_ID}&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid={Region_ID}", 
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
		"URL=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd={Subregion_ID}&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid={Subregion_ID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd={Subregion_ID}&vrn=100100084849062&prver=0&pronetvd=null&region=0&sub_region=0&type=0&vibid={Subregion_ID}", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC01_TR05_Region_website",LR_AUTO);
	
	FileVarriable = fopen (FileLocation,"w+");
	
	for (uik_index=1; uik_index <= atoi(lr_eval_string("{UIK_IDs_count}")); uik_index++) {
		
		lr_save_string(lr_paramarr_idx("UIK_IDs", uik_index), "UIK_ID");
		
		lr_start_transaction("UC01_TR06_Choose_UIK");

		lr_think_time(86);
	
		web_url("adygei", 
			"URL=http://www.adygei.vybory.izbirkom.ru/region/adygei?action=show&global=true&root=14001001&tvd={UIK_ID}&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid={UIK_ID}", 
			"TargetFrame=", 
			"Resource=0", 
			"RecContentType=text/html", 
			"Referer=http://www.vybory.izbirkom.ru/region/izbirkom?action=show&global=true&root=12000009&tvd={Subregion_ID}&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid={Subregion_ID}", 
			"Snapshot=t8.inf", 
			"Mode=HTML", 
			LAST);
	
		lr_end_transaction("UC01_TR06_Choose_UIK",LR_AUTO);
	
		lr_start_transaction("UC01_TR07_UIK_Results");
	
		lr_think_time(38);
		
		web_reg_save_param("Region",
                 "LB=tvd={Region_ID}\">",
                 "RB=</a>",
				 LAST);
	
		web_reg_save_param("Subregion",
                 "LB=tvd={Subregion_ID}\">",
                 "RB=</a>",
				 LAST);
		
		web_reg_save_param("UIK",
                 "LB=tvd={UIK_ID}\">УИК №",
                 "RB=</a>",
				 LAST);
				
		web_reg_save_param("Baburin",
                 "LB=Бабурин Сергей Николаевич</td><td style=\"color:black\" align=\"right\"><b>",
                 "RB=<",
				 LAST);
		
		web_reg_save_param("Grudinin",
                 "LB=Грудинин Павел Николаевич</td><td style=\"color:black\" align=\"right\"><b>",
                 "RB=<",
				 LAST);
		
		web_reg_save_param("Zirinovski",
                 "LB=Жириновский Владимир Вольфович</td><td style=\"color:black\" align=\"right\"><b>",
                 "RB=<",
				 LAST);
		
		web_reg_save_param("Putin",
                 "LB=Путин Владимир Владимирович</td><td style=\"color:black\" align=\"right\"><b>",
                 "RB=<",
				 LAST);
		
		web_reg_save_param("Sobchak",
                 "LB=Собчак Ксения Анатольевна</td><td style=\"color:black\" align=\"right\"><b>",
                 "RB=<",
				 LAST);
		
		web_reg_save_param("Syraikin",
                 "LB=Сурайкин Максим Александрович</td><td style=\"color:black\" align=\"right\"><b>",
                 "RB=<",
				 LAST);
		
		web_reg_save_param("Titov",
                 "LB=Титов Борис Юрьевич</td><td style=\"color:black\" align=\"right\"><b>",
                 "RB=<",
				 LAST);
		
		web_reg_save_param("Yavlinski",
                 "LB=Явлинский Григорий Алексеевич</td><td style=\"color:black\" align=\"right\"><b>",
                 "RB=<",
				 LAST);
		
		web_url("Итоги голосовани", 
			"URL=http://www.adygei.vybory.izbirkom.ru/region/region/adygei?action=show&root=14001001&tvd={UIK_ID}&vrn=100100084849062&region=1&global=true&sub_region=1&prver=0&pronetvd=null&vibid={UIK_ID}&type=226", 
			"TargetFrame=", 
			"Resource=0", 
			"RecContentType=text/html", 
			"Referer=http://www.adygei.vybory.izbirkom.ru/region/adygei?action=show&global=true&root=14001001&tvd={UIK_ID}&vrn=100100084849062&prver=0&pronetvd=null&region=1&sub_region=1&type=0&vibid={UIK_ID}", 
			"Snapshot=t9.inf", 
			"Mode=HTML", 
			LAST);
		
		lr_param_sprintf("results","%s %s УИК #%s %s %s %s %s %s %s %s %s",
		                 lr_eval_string("{Region}"),
		                 lr_eval_string("{Subregion}"),
		                 lr_eval_string("{UIK}"),
		                 lr_eval_string("{Baburin}"),
		                 lr_eval_string("{Grudinin}"),
		                 lr_eval_string("{Zirinovski}"),
		                 lr_eval_string("{Putin}"),
		                 lr_eval_string("{Sobchak}"),
		                 lr_eval_string("{Syraikin}"),
		                 lr_eval_string("{Titov}"),
		                 lr_eval_string("{Yavlinski}"));

		
		
     	fprintf (FileVarriable, "%s \n", lr_eval_string("{results}")); 
     		
		lr_end_transaction("UC01_TR07_UIK_Results",LR_AUTO);
	
		lr_start_transaction("UC01_TR08_Download_results");
	
		lr_end_transaction("UC01_TR08_Download_results",LR_AUTO);
		
	}
	
	}

	
	
	fclose (FileVarriable);

	return 0;
}