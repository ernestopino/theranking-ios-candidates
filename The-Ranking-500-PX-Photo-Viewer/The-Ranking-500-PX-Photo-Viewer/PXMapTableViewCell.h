//
//  PXMapTableViewCell.h
//  The-Ranking-500-PX-Photo-Viewer
//
//  Created by Ernesto Pino on 2/3/15.
//  Copyright (c) 2015 Ernesto Pino. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface PXMapTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@end
