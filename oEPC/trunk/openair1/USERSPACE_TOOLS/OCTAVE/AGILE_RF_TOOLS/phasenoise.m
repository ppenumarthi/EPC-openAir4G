s = oarf_get_frame(2);
sig0 = s(:,1);
sig1 = s(:,2);

sig0 = s(5000:end,1);  % first channel
sig1 = s(5000:end,2);  % 2nd channel


bw=7.68e6;

spec = abs(fft(sig1)).^2;
[a,b] = max(spec);
freq = (b-1)*bw/length(sig0);

L= 1000;
W = 1;

offset_vec = (0:L-1)*((2*W)+1);
W2 = 1+(2*W);

window_vec = (-W : W);
pn = zeros(1,(2*L) - 1);
for i = 1:L,
  pn(i+L-1) = sum(spec(offset_vec(i) + b + window_vec));
end

for i = 2:L,
  pn(L-i+1) = sum(spec(-offset_vec(i) + b + window_vec));
end

pn_2 = 20*log10(pn / pn(L)) - 10*log10(W2*bw/length(sig0));

f = ((-L+1):(L-1))*W2*bw/length(sig0);


ylabel('dBc/Hz')
xlabel("f_offset (Hz)")
title("Phase Noise @ IQ output for Fc = 1912.6 + Fs/4 MHz CW input at antenna")
semilogx(f(L:(2*L - 1)),pn_2(L:(2*L -1)))


sum(pn.^2*(f(2)-f(1)))
