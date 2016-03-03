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

@interface comPlayerViewController: UIViewController<ADBannerViewDelegate> {
    BOOL program;
}

@property (atomic, strong) IBOutlet UIImageView *logoImage;
@property (atomic, strong) IBOutlet UIImageView *artImageView;
@property (atomic, strong) IBOutlet UITextView *descriptionTextView;
@property (atomic, strong) IBOutlet UIButton *oblibeneBtn;
@property (atomic, strong) IBOutlet UIButton *sleepBtn;
@property (atomic, strong) IBOutlet UIButton *programBtn;
@property (atomic, strong) IBOutlet UILabel *sleepTime;
@property (atomic, strong) IBOutlet UILabel *radioLabel;
@property (atomic, strong) IBOutlet UILabel *radioSlogan;
@property (atomic, strong) IBOutlet UIActivityIndicatorView *activity;
@property (atomic, strong) IBOutlet UIButton *oblibeneMinBtn;
@property (atomic, strong) IBOutlet UIView *volumeView;
@property (weak, nonatomic) IBOutlet UIButton *playBtn;
@property (weak, nonatomic) IBOutlet UIButton *stopBtn;


-(IBAction)play:(id)sender;
-(IBAction)stop:(id)sender;
-(IBAction)tobleOblibene:(id)sender;
-(IBAction)sleepTouch:(id)sender;
-(IBAction)facebookBtn:(id)sender;
-(IBAction)programTouch:(id)sender;
-(IBAction)infoTouch:(id)sender;

@end