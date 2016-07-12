//
//  comSecondViewController.h
//  ABradio
//
//  Created by Jan Damek on /202/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <MediaPlayer/MPVolumeView.h>
#import <iAd/iAd.h>

@interface comPlayerViewController: UIViewController<ADBannerViewDelegate>

-(IBAction)play:(id)sender;
-(IBAction)stop:(id)sender;
-(IBAction)tobleOblibene:(id)sender;
-(IBAction)sleepTouch:(id)sender;
-(IBAction)facebookBtn:(id)sender;
-(IBAction)programTouch:(id)sender;
-(IBAction)infoTouch:(id)sender;

@end
