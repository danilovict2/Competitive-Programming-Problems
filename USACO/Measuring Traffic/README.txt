The highway adjacent to Farmer John's farm has recently seen a dramatic increase in traffic, or at least so it seems to Farmer John. To be sure, he wants to measure the traffic flow on the highway with a set of sensors, each capable of measuring the rate of flow of traffic on a segment of road.

Unfortunately, while walking through the barn one day, Farmer John trips and drops his box of sensors into a large vat of milk, after which they no longer work as well. Instead of producing a single exact reading of traffic flow rate, each sensor now outputs a range of possible values. For example, a sensor might output the range [7,13]

, indicating that the rate of traffic flow on a segment of road is no less than 7, and no greater than 13.

The highway runs for N
miles next to the farm, and traffic on the highway only flows in one direction, from mile 1 towards mile N. Farmer John wants to install N

sensors -- one for each 1-mile segment of the highway. In some of these segments, there are on-ramps that allow traffic to enter the highway; in each of these cases, Farmer John will install his sensor on the on-ramp to measure (approximately) the amount of incoming traffic. In some segments there are off-ramps that allows traffic to exit the highway; in each of these cases, Farmer John will install his sensor on the off-ramp. Each segment contains at most one ramp. If there is no on-ramp or off-ramp in a segment of highway, Farmer John installs a sensor on the main highway itself.

Given the readings from Farmer John's N
sensors, please determine the most specific possible ranges that describe the rate of traffic flow initially on the highway prior to mile 1 and for traffic continuing on the highway past mile N. These ranges should be consistent with all N sensor readings. 