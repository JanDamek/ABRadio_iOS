//
//  comInfoViewController.h
//  ABradio
//
//  Created by Jan Damek on 26.10.13.
//  Copyright (c) 2013 droidsoft.eu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>

@interface comInfoViewController : UIViewController<ADBannerViewDelegate>

-(IBAction)closeInfoBtn:(id)sender;
-(IBAction)btnMMS:(id)sender;
-(IBAction)btnDigitalScope:(id)sender;
-(IBAction)btnNapisteNam:(id)sender;

@end
