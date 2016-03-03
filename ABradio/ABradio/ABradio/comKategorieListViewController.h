//
//  comKategorieListViewController.h
//  ABradio
//
//  Created by Jan Damek on /194/12.
//  Copyright (c) 2012 droidsoft.eu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>

@interface comKategorieListViewController : UITableViewController <UISearchBarDelegate, ADBannerViewDelegate>{
        UISearchBar *sBar; 
}
@property (atomic, strong) IBOutlet UISearchBar *sBar;
@property (atomic, strong) IBOutlet UIBarButtonItem *btnHraje;

@end
